//The Beachcomber
//Thomas Harlin || Spring 2021
//CRT 360 || GamePad

#include "frames.h"
#include "screen.h"
#include "tile.h"




void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  initScreen();
}

void loop() {
  // put your main code here, to run repeatedly:

  fps();
  //screenTest();
  drawLevel(1);
}
//////////////////////////////////////////////////////////////////////////////////////

void drawLevel(int thisLevel) {
  for (int y = 0; y < tileH; y++) {
    for (int x = 0; x < tileW; x++) {
      int index = x + (y * tileW);
      int whichTile = levels[thisLevel][index];


      int finalX = x * tileSize;
      int finalY = y * tileSize;

      tft.drawRGBBitmap(finalX, finalY, BeachComberAssets_PIX[whichTile], tileSize, tileSize);

      tft.updateScreen();

    }
  }
}
