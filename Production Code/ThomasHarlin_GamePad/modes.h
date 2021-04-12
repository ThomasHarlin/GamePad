#include "BeachcomberIntro_MASK.h"
#include "BeachcomberIntro_PIX.h"


int curMode = -1;
bool initIntro = false;


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

void introScreen() {
  if (initIntro == false) {
    tft.setClipRect(0,0, screenW, screenH);
    tft.drawRGBBitmap(0, 0, BeachcomberIntro_PIX[0], w, h);
    tft.updateScreen();
    initIntro = true;
  }
  else {
   for(int i=0; i<4; i++){
     buttons[i].update();

     if(buttons[i].rose()){
      curMode = 0;
     }
   }
  }
}
