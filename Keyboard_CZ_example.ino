#include "Keyboard.h"

void setup() {
Keyboard.begin(KeyboardLayout_cz_CZ);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() > 0){
  String var = Serial.readString(); 
  delay(100);
  Keyboard.print(var);
  Serial.read();
}
}
