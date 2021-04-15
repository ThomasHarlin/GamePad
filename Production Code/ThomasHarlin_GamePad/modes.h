#include "BeachcomberIntro_MASK.h"
#include "BeachcomberIntro_PIX.h"

int introFrame = 0;

int prevMode;

bool initIntro = false;
bool scr0 = false;
bool scr1 = false;
bool scr2 = false;
bool scr3 = false;
bool scr4 = false;
bool scr5 = false;
bool scr6 = false;
bool scr7 = false;


//////////////////////////////////////////////////////////////////////////////////////
//intro Screen
void introScreen() {
  if (initIntro == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    tft.drawRGBBitmap(0, 0, BeachcomberIntro_PIX[introFrame], screenW, screenH);
    tft.updateScreen();

    if (millis() < 1000) {
      //stops a power surge from skipping the intro screen
    }
    else {
      if (introFrame == 0) {
        for (int i = 0; i < 4; i++) {
          buttons[i].update();

          if (buttons[i].rose()) {
            introFrame = 1;
          }
        }
      }
    }
    if (introFrame == 1) {
      for (int i = 0; i < 4; i++) {
        buttons[i].update();

        if (buttons[i].rose()) {
          initIntro = true;
          curMode = 0;
        }
      }
    }
  }
}
//////////////////////////////////////////////////////////////////////////////////////
//screen 0
void firstLevel() {
  if (scr0 == false) {
    drawLevel(0);
    scr0 = true;
  }
  else {
    drawLevel(0);
    drawHero();
  }
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 1
void secondLevel() {
  if (scr1 == false) {
    drawLevel(1);
    scr1 = true;
  }
  else {
    drawLevel(1);
    drawHero();
  }
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 2
void thirdLevel() {
  if (scr2 == false) {
    drawLevel(2);
    scr2 = true;
  }
  else {
    drawLevel(2);
    drawHero();
  }
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 3
void fourthLevel() {
  if (scr3 == false) {
    drawLevel(3);
    scr3 = true;
  }
  else {
    drawLevel(3);
    drawHero();
  }
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 4
void fifthLevel() {
  if (scr4 == false) {
    drawLevel(4);
    scr4 = true;
  }
  else {
    drawLevel(4);
    drawHero();
  }
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 5
void sixthLevel() {
  if (scr5 == false) {
    drawLevel(5);
    scr5 = true;
  }
  else {
    drawLevel(5);
    drawHero();
  }
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 6
void seventhLevel() {
  if (scr6 == false) {
    drawLevel(6);
    scr6 = true;
  }
  else {
    drawLevel(6);
    drawHero();
  }
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 7
void eighthLevel() {
  if (scr7 == false) {
    drawLevel(7);
    scr7 = true;
  }
  else {
    drawLevel(7);
    drawHero();
  }
}

//////////////////////////////////////////////////////////////////////////////////////
void runMode() {
  switch (curMode) {
    //intro
    case -1: introScreen( ); break;
    /////////////////////////////////////////
    //Main Beach Areas
    /////////////////////////////////////////
    //pawn shop
    case 0: firstLevel( ); break;
    //Sandwater public beach
    case 1: secondLevel( ); break;
    //Sandwater public dump
    case 2: thirdLevel( ); break;
    //Beach with no secrets
    case 3: fourthLevel( ); break;
    //Ernesto Private Cove
    case 4: fifthLevel( ); break;
    //Road out of Sandwater
    case 5: sixthLevel( ); break;
    /////////////////////////////////////////
    //Hidden Areas
    /////////////////////////////////////////
    //secret Drug Cave
    case 6: seventhLevel( ); break;
    //Ernesto Secret Island
    case 7: eighthLevel( ); break;
  }
}

///////////////////////////
//screen advancer
//void moveScreen(){
//getControls();
//for(int i = 0; i<4; i++){
//  if(buttonBuffer
//}
//}
