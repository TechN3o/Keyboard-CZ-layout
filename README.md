
### *work still in progress* 🚧
# Keyboard Library for Arduino

Czech layout for Arduino Keyboard.h library
### **about**
  - layout: QWERTZ<br>
### **added**
  - added diacritical czech letters: ě, š, č, ř, ž, ý, á, í, é
      - ˇ - KEY_KARON_(letter: E, S, C, R, Z)
      - ´ - KEY_AKUT_(letter: Y, A, I, E)
  - definitions `KeyboardLayout_cz_CZ`
  

## example of use
Inputing any string will return as keystrokes from arduino of that input 
 <br>- *ahoj světe* = *hello world* 
```
#include "Keyboard.h"
void setup() {
Keyboard.begin(KeyboardLayout_cz_CZ);
Serial.begin(9600);
Serial.pritln("ahoj světe");
}

void loop() {
if(Serial.available() > 0){
  String str = Serial.readString(); 
  delay(100);
  Keyboard.print(str);
  Serial.read();
}
}
```
### picture of a keyboard with HID codes [*might be useful for your own layout*](https://raw.githubusercontent.com/qlyoung/armory-keyboard/master/layouts/keyboard-layout.png)

>*I`m sure that something might not work, so any feedback is appreciated* <img src="https://images.emojiterra.com/google/noto-emoji/unicode-15.1/color/svg/1f1e8-1f1ff.svg" alt="czech flag?" style="height: 20px;"/>

