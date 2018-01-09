
#include <SoftwareSerial.h>
SoftwareSerial ArduinoSerial(3,2);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
ArduinoSerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("Hello");
  float val = ArduinoSerial.parseInt();
  Serial.println(val);
  if(ArduinoSerial.read() == '\n')
  {
    Serial.println(val);
  }
  delay(1000);

} 

