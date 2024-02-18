#include "Keyboard.h"

void setup() {
Keyboard.begin(KeyboardLayout_cz_CZ);
Serial.begin(9600);
}

void loop() {
if(Serial.available() > 0){
  String str = Serial.readString(); 
  delay(100);
  Keyboard.print(str);
  Serial.read();
}
}
