//The Beachcomber
//Thomas Harlin || Spring 2021
//CRT 360 || GamePad

#include "frames.h"
#include "screen.h"
#include "tile.h"
#include "controls.h"
#include "hero.h"



void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  initScreen();
  initControls();

}

void loop() {
  // put your main code here, to run repeatedly:

  //fps();
  //screenTest();
  //drawLevel(0);
  //testJoy();
  getControls();

}
//////////////////////////////////////////////////////////////////////////////////////
