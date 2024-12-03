"""
================================================
A TV app for the AVerMedia AVerTV USB2.0 Plus
Radio Stations module
================================================
Version:    0.1
Author:     Sinan Güngör
License:    GPL v2
"""


import os
import platform


from lxml import etree

class RadioStation():
    def __init__(self,frequencyMHz=None,name=None):
        self.frequencyMHz = frequencyMHz
        self.name  = name
    def copy_of(self,station):
        self.frequencyMHz = station.frequencyMHz
        self.name  = station.name
    def print(self):
        print("Radio station: {f:.2f} MHz | {n}".format(f=self.frequencyMHz, n=self.name))

class RadioStations():
    def __init__(self):
        self.fileStationList="radio-stations.xml"
        self.station = 0
        self.nStation = 0
        self.stations = []
    def read(self):
        isFile = os.path.isfile(self.fileStationList)
        if isFile:
            tree=etree.parse(self.fileStationList)
            root=tree.getroot()
            self.station=int(root[0].text)
            self.stations = []
            for s in root.findall('station'):
                self.stations.append(RadioStation())  
                self.nStation=len(self.stations)
                self.stations[self.nStation-1].name=s[0].text
                self.stations[self.nStation-1].frequencyMHz=float(s[1].text)
        else:
            newStation=RadioStation()
            newStation.frequencyMHz=87.5
            newStation.name="Unknown Station"  
            self.stations=[]
            self.stations.append(newStation)
            self.nStation=1
            self.station=0
    def write(self):
        root = etree.Element("playlist")
        Playing=etree.SubElement(root,"playing").text="{}".format(self.station)
        for i in range (self.nStation):
            Station=etree.SubElement(root,"station")
            etree.SubElement(Station,"name").text=self.stations[i].name
            etree.SubElement(Station,"frequency_MHz").text="{freq:.2f}".format(freq=self.stations[i].frequencyMHz)        
        tree = etree.ElementTree(root)
        tree.write(self.fileStationList,encoding="utf-8", xml_declaration=True, pretty_print=True)
        
        from shutil import which
        if which('xml') :
            cmd="xml format {file} > {file}.1".format(file=self.fileStationList)
            print(cmd)
            os.system(cmd)
            cmd="mv {file}.1 {file} ".format(file=self.fileStationList)
            print(cmd)
            os.system(cmd)
    def add_station(self,radioStation):        
        stationToAdd="{freq:.2f} MHz : {name}".format(freq=radioStation.frequencyMHz,name=radioStation.name)
        print (stationToAdd)
        newRadioStation=RadioStation()
        newRadioStation.frequencyMHz=radioStation.frequencyMHz
        newRadioStation.name=radioStation.name
        iFreq=0
        for i in range(len(self.stations)):
            if newRadioStation.frequencyMHz >= self.stations[i].frequencyMHz :
                iFreq=i+1
        if iFreq==self.nStation:
            self.stations.append(newRadioStation)
        else:
            self.stations.insert(iFreq,newRadioStation)
        self.nStation=self.nStation+1
        self.station=iFreq
        self.print()
    def print(self):
        print("Radio stations:")
        print(' # of stations: {}'.format(self.nStation))
        for i in range (self.nStation):
            print(" {i:2d} > {f:.2f} MHz : {n}".format(i=i, f=self.stations[i].frequencyMHz, n=self.stations[i].name))
        print("Selected station:",self.station)
