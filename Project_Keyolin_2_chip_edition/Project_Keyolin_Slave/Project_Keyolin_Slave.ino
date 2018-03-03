#include <Keyboard.h>
#include <Wire.h>
#include "Masher.h"
void setup() {
  Serial.begin(115200);
  Wire.begin(8);
  Wire.onReceive(recieveEvent);
  while(!Serial);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1);
}

void recieveEvent(){
  char note;
  note=Wire.read();
  mash(note,"violin");
  delay(500);
}

