#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>

//#include <SerialESP8266wifi.h>
#include <SoftwareSerial.h>
//#include <ESP8266Wifi.h>
#include "UbidotsMicroESP8266.h"

#define TOKEN  "uqYCMLXy1jC80W9v82ALHAhrzHfW23"  // Put here your Ubidots TOKEN
#define ID_1 "5938e9d57625427d5001c192" // Put your variable ID here
//#define ID_2 "Your_variable_ID_here" // Put your variable ID here
#define WIFISSID "sharath" // Put here your Wi-Fi SSID
#define PASSWORD "anugrahabhuvana_838" // Put here your Wi-Fi password

Ubidots client(TOKEN);
SoftwareSerial NodeSerial(D2,D3);
void setup() {
  // put your setup code here, to run once:
  pinMode(D2,INPUT);
  pinMode(D3,OUTPUT);
  Serial.begin(9600);
  client.wifiConnection(WIFISSID, PASSWORD);
  NodeSerial.begin(9600);
}

void loop() {
  float val = NodeSerial.parseInt();
    if(NodeSerial.read() == '\n')
  {
    Serial.println(val);
    client.add(ID_1, val);
    //client.add(ID_2, value2);
    client.sendAll(false);
    delay(1000);
  }
  
  // put your main code here, to run repeatedly:
}
