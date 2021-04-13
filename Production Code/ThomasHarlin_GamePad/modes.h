#include "BeachcomberIntro_MASK.h"
#include "BeachcomberIntro_PIX.h"

int introFrame = 0;

int curMode = -1;
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
  drawHero();
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 2
void thirdLevel() {
  drawHero();
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 3
void fourthLevel() {
  drawHero();
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 4
void fifthLevel() {
  drawHero();
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 5
void sixthLevel() {
  drawHero();
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 6
void seventhLevel() {
  drawHero();
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 7
void eighthLevel() {
  drawHero();
}

//////////////////////////////////////////////////////////////////////////////////////
void runMode() {
  switch (curMode) {
    //intro
    case -1: introScreen( ); break;
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
    //secret Drug Cave
    case 6: seventhLevel( ); break;
    //Ernesto Secret Island
    case 7: eighthLevel( ); break;
  }
}
