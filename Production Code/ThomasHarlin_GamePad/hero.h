#include "BeachComberBarry_MASK.h"
#include "BeachComberBarry_PIX.h"


int heroX = screenW / 2;
int heroY = screenH / 2;
int margin = 2;
int heroW = BeachcomberBarry_W + margin;
int heroH = BeachcomberBarry_H + margin;


float heroSpeed = 1.0;

//tracks the direction hero is facing
//true = left, false = right;
bool heroDir = true;

int heroFrame;
Metro heroFrameTimer = Metro(250);


//////////////////////////////////////////////////////////////////////////////////////
//Function to Draw my character
void drawHero() {
  heroX = heroX + (joyBuffer[0] * heroSpeed);
  heroY = heroY + (joyBuffer[1] * heroSpeed);

  drawLevel(1);

  tft.setClipRect(heroX - margin, heroY - margin, heroW, heroH);

  tft.drawRGBBitmap(heroX, heroY, BeachcomberBarry_PIX[0], BeachcomberBarry_MASK[0], BeachcomberBarry_W, BeachcomberBarry_H);

  tft.updateScreen();

}
//////////////////////////////////////////////////////////////////////////////////////
