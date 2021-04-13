#include "BeachComberBarry_MASK.h"
#include "BeachComberBarry_PIX.h"


float heroX = screenW / 2;
float heroY = screenH / 2;
int margin = 2;
int heroW = BeachcomberBarry_W + (margin*2);
int heroH = BeachcomberBarry_H + (margin*2);


float heroSpeed = .5;

//tracks the direction hero is facing
//false = left, true = right
bool heroDir = false;
//false = standing animation, true = walking animation
int heroMove = false;

int heroFrame = 2;
int heroOffset = 4;
Metro heroFrameTimer = Metro(300);


//////////////////////////////////////////////////////////////////////////////////////
//Function to Draw my character
void drawHero() {
  heroX = heroX + (joyBuffer[0] * heroSpeed);
  heroY = heroY + (joyBuffer[1] * heroSpeed);



  //sees if the player will be doing a move animation
  if (joyBuffer[0] == 0 && joyBuffer[1] == 0) {
    heroMove = false;
  }
  else {
    heroMove = true;
  }
  //tracks which way the character is moving
  if (joyBuffer[0] == -1) {
    heroDir = false;
  }
  if (joyBuffer[0] == 1) {
    heroDir = true;
  }



  if (heroFrameTimer.check()) {
    heroFrame++;

    //is the joystick being touched?
    if (heroMove) {
      //moving right animation
      if (heroDir) {
        if (heroFrame > 5 || heroFrame < 2) {
          heroFrame = 2;
        }
      }
      //moving left animation
      else {
        if (heroFrame > 9 || heroFrame < 6) {
          heroFrame = 6;
        }
      }
    }
    //Standng Still Animation
    else {
      if (heroFrame > 1) {
        heroFrame = 0;
      }
    }
  }


  //draws the background level and character
 
  tft.setClipRect(heroX - margin, heroY - margin, heroW, heroH);
  tft.drawRGBBitmap(heroX, heroY, BeachcomberBarry_PIX[heroFrame], BeachcomberBarry_MASK[heroFrame], BeachcomberBarry_W, BeachcomberBarry_H);


}
//////////////////////////////////////////////////////////////////////////////////////
