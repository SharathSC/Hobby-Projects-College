#include "UbidotsMicroESP8266.h"

#define TOKEN  "uqYCMLXy1jC80W9v82ALHAhrzHfW23"  // Put here your Ubidots TOKEN
#define ID_1 "5938e9d57625427d5001c192" // Put your variable ID here
//#define ID_2 "Your_variable_ID_here" // Put your variable ID here
#define WIFISSID "sharath" // Put here your Wi-Fi SSID
#define PASSWORD "anugrahabhuvana_838" // Put here your Wi-Fi password

Ubidots client(TOKEN);

void setup(){
    Serial.begin(115200);
    client.wifiConnection(WIFISSID, PASSWORD);
    //client.setDebug(true); // Uncomment this line to set DEBUG on
}

void loop(){
    float value1 = 10;
    //float value2 = analogRead(2)
    client.add(ID_1, value1);
    //client.add(ID_2, value2);
    client.sendAll(false);
    delay(5000);
}
