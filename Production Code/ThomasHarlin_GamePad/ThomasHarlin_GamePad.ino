//The Beachcomber
//Thomas Harlin || Spring 2021
//CRT 360 || GamePad

int curMode = -1;
bool hasKey = false;
bool hasBus = false;
bool hasGas = false;

#include "frames.h"
#include "screen.h"
#include "tile.h"
#include "controls.h"
#include "interaction.h"
#include "hero.h"
#include "modes.h"




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  initScreen();
  initControls();
  initNeighbors();

}

void loop() {
  // put your main code here, to run repeatedly:

  //fps();
  //screenTest();
  //drawLevel(1);
  //testJoy();
  getControls();
  //testControls();
  runMode();
  // drawHero();

  tft.updateScreen();

}
//////////////////////////////////////////////////////////////////////////////////////
