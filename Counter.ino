//MageAlya
//April 14th, 2017
//Counter

#include <Arduboy.h>
Arduboy arduboy;
int counter;

  // Put your setup code here to run once
void setup() {
  
  arduboy.begin();
  arduboy.clear();
  counter = 0;

}

  // Put your main code here to run repeatedly
void loop() {

  arduboy.clear();
  arduboy.setCursor(0, 0);
  counter = counter + 1;
  arduboy.print(counter);
  arduboy.display();

}


