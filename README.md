
# Keyboard Library for Arduino

Standard Arduino Keyboard.h library, but with added __Czech layout__ 
# **about**
  - layout: QWERTZ<br>
# **added**
  - added czech letters: ě, š, č, ř, ž, ý, á, í, é

  
>*I believe that something might not work or is wrong so any feedback is appreciated*
<br>
`#include "Keyboard.h"
// ahoj světe xd
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
}`
