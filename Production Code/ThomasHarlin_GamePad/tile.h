#include "BeachComberAssets_MASK.h"
#include "BeachComberAssets_PIX.h"


#define tileW 16         // 16 Tiles Across
#define tileH 12         // 12 Tiles Down
#define tileSize 20      // Tile Width (in pixels)
#define numLevels 6      // Number of Levels



int levels[numLevels][tileW * tileH] {
  // Level 0 - Pawn Shop
  {
    0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
    0x23, 0x2B, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x2D, 0x23,
    0x23, 0x26, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x27, 0x23,
    0x23, 0x26, 0x27, 0x24, 0x24, 0x26, 0x27, 0x24, 0x24, 0x26, 0x27, 0x24, 0x24, 0x26, 0x27, 0x23,
    0x23, 0x2A, 0x2C, 0x24, 0x24, 0x2A, 0x2C, 0x24, 0x24, 0x2A, 0x2C, 0x24, 0x24, 0x2A, 0x2C, 0x23,
    0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x23,
    0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x23,
    0x23, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x23,
    0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23,
    //HUD
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  },
  // Level 1 - Sandwater Public Beach
  {
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x0A,
    0x0A, 0x0A, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2E,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x2E,
    0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x31, 0x00, 0x00, 0x2E,
    0x00, 0x00, 0x00, 0x33, 0x00, 0x32, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x35, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x35, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x35, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    //HUD
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  },
  // Level 2 - Sandwater Public Dumping Grounds
  {
    0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x08, 0x08, 0x09, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x09, 0x09, 0x09, 0x08, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x00,
    0x00, 0x05, 0x00, 0x00, 0x00, 0x0A, 0x0A, 0x09, 0x09, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x09, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x06, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x01, 0x00,
    0x01, 0x04, 0x05, 0x00, 0x00, 0x01, 0x01, 0x03, 0x01, 0x01, 0x01, 0x00, 0x05, 0x00, 0x35, 0x01,
    0x35, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    //HUD
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  },
  // Level 3 - Boring Beach with No Secrets
  {
    0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x08,
    0x0A, 0x0A, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x0A, 0x0A, 0x0A, 0x0A, 0x08,
    0x00, 0x00, 0x00, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x01, 0x35, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x35, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x35, 0x01, 0x01, 0x01,
    //HUD
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  },
  // Level 4 - Ernesto Private Cove
  {
    0x0A, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
    0x00, 0x00, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x0A,
    0x00, 0x00, 0x00, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x08, 0x36, 0x2E, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x35, 0x00, 0x00, 0x00, 0x0A, 0x37, 0x2E, 0x08, 0x0A, 0x00, 0x34, 0x00, 0x00, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x2E, 0x0A, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x2E, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x35, 0x01, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x01, 0x01, 0x01, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    //HUD
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  },
  // Level 5 - Last Road out of SandWater
  {
    0x0A, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
    0x00, 0x00, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x0A,
    0x00, 0x00, 0x00, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x08, 0x36, 0x2E, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x35, 0x00, 0x00, 0x00, 0x0A, 0x37, 0x2E, 0x08, 0x0A, 0x00, 0x34, 0x00, 0x00, 0x01, 0x01,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x2E, 0x0A, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x2E, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x07, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x35, 0x01, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x01, 0x01, 0x01, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    //HUD
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  },
  // Etc..
};




void drawLevel(int thisLevel) {
  for (int y = 0; y < tileH; y++) {
    for (int x = 0; x < tileW; x++) {
      int index = x + (y * tileW);
      int whichTile = levels[thisLevel][index];


      int finalX = x * tileSize;
      int finalY = y * tileSize;

      tft.drawRGBBitmap(finalX, finalY, BeachComberAssets_PIX[whichTile], tileSize, tileSize);

    }
  }
  tft.updateScreen();
}
