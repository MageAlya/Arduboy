//MageAlya
//April 14th, 2017
//Pressing Buttons

#include <Arduboy.h>
Arduboy arduboy;
int counter;

void setup() {
  arduboy.begin();
  arduboy.clear();
  counter = 0;
}

void loop() {
  arduboy.clear();
  
if( arduboy.pressed(UP_BUTTON) == true ) {
    //Increase counter
  counter = counter +1;
}

if( arduboy.pressed(DOWN_BUTTON) == true ) {
    //Decrease counter
  counter = counter -1;
}

if( counter == 36 ) {
  arduboy.setCursor(30, 30);
  arduboy.print("Yay!");
}

  arduboy.setCursor(0, 0);
  arduboy.print(counter);
  arduboy.display();
}


