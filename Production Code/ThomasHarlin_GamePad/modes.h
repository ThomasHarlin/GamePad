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
//screen 0 pawn shop
void firstLevel() {
  if (scr0 == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(curMode);
    scr0 = true;
    tft.updateScreen();
  }

  drawLevel(curMode);
  drawHero();

  //doorway interaction
  if (interaction[curMode][curTile] == 0x02) {
    curMode = 1;
    scr0 = false;
    heroX = 270;
    heroY = 70;
  }

}

//////////////////////////////////////////////////////////////////////////////////////
//screen 1 public beach
void secondLevel() {
  if (scr1 == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(curMode);
    scr1 = true;
    tft.updateScreen();
  }

  drawLevel(curMode);
  drawHero();

  //pawn shop door
  if (interaction[curMode][curTile] == 0x01) {
    curMode = 0;
    scr1 = false;
    heroX = 60;
    heroY = 105;
  }

  //dump barrier
  if (interaction[curMode][curTile] == 0x03) {
    curMode = 2;
    scr1 = false;
    heroX = 250;
    heroY = 110;
  }
}

//////////////////////////////////////////////////////////////////////////////////////
//screen 2 public dump
void thirdLevel() {
  if (scr2 == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(curMode);
    scr2 = true;
    tft.updateScreen();
  }

  drawLevel(curMode);
  drawHero();

  //Boring Beach
  if (interaction[curMode][curTile] == 0x04) {
    curMode = 3;
    scr2 = false;
    heroX = 260;
    heroY = 105;
  }

  //public Beach
  if (interaction[curMode][curTile] == 0x02) {
    curMode = 1;
    scr2 = false;
    heroX = 60;
    heroY = 110;
  }

}

//////////////////////////////////////////////////////////////////////////////////////
//screen 3 boring beach
void fourthLevel() {
  if (scr3 == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(curMode);
    scr3 = true;
    tft.updateScreen();
  }

  drawLevel(curMode);
  drawHero();

  //private cove
  if (interaction[curMode][curTile] == 0x05) {
    curMode = 4;
    scr3 = false;
    heroX = 260;
    heroY = 105;
  }

  //public dump
  if (interaction[curMode][curTile] == 0x03) {
    curMode = 2;
    scr3 = false;
    heroX = 60;
    heroY = 110;
  }

  //secret cave
   if (interaction[curMode][curTile] == 0x06) {
    curMode = 5;
    scr3 = false;
    heroX = 60;
    heroY = 110;
  } 

}

//////////////////////////////////////////////////////////////////////////////////////
//screen 4 private cove
void fifthLevel() {
  if (scr4 == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(curMode);
    scr4 = true;
    tft.updateScreen();
  }

  drawLevel(curMode);
  drawHero();

}

//////////////////////////////////////////////////////////////////////////////////////
//screen 5 last road out
void sixthLevel() {
  if (scr5 == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(curMode);
    scr5 = true;
    tft.updateScreen();
  }

  drawLevel(curMode);
  drawHero();

}

//////////////////////////////////////////////////////////////////////////////////////
//screen 6 secret cave
void seventhLevel() {
  if (scr6 == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(curMode);
    scr6 = true;
    tft.updateScreen();
  }

  drawLevel(curMode);
  drawHero();

}

//////////////////////////////////////////////////////////////////////////////////////
//screen 7 private island
void eighthLevel() {
  if (scr7 == false) {
    tft.setClipRect(0, 0, screenW, screenH);
    drawLevel(curMode);
    scr7 = true;
    tft.updateScreen();
  }

  drawLevel(curMode);
  drawHero();

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
