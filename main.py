# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.

import urllib.request
import serial
from bs4 import BeautifulSoup
def sendData(port):
    ser = serial.Serial('COM'+str(port),9800,timeout=1)
    while(True):
        line = ser.readline()
        if line is not None:
            line = line.decode()
            line = line.strip()
            urllib.request.urlopen("https://api.thingspeak.com/update?api_key=RR788I8Z0V43EVXX&field1="+str(line)

# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    sendData(10)

