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

SoftwareSerial NodeSerial(D2,D3);
void setup() {
  // put your setup code here, to run once:
  pinMode(D2,INPUT);
  pinMode(D3,OUTPUT);
  Serial.begin(9600);
  NodeSerial.begin(9600);
}

void loop() {
  NodeSerial.print(20);
  NodeSerial.print("\n");
  Serial.println("20");
  // put your main code here, to run repeatedly:
  delay(1000);
}
