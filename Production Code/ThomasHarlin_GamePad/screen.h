#include <SPI.h>

#include <ILI9341_t3n.h>

#define TFT_DC  9
#define TFT_CS  10
#define TFT_RST 8

ILI9341_t3n tft = ILI9341_t3n(TFT_CS, TFT_DC, TFT_RST);

#define screenW  320
#define screenH  240
DMAMEM uint16_t screenBuffer[screenW * screenH];                    // Screen Buffer


Metro tester = Metro(2000);
bool flop = true;

//////////////////////////////////////////////////////////////////////////////////////
//function to initilize the screen
void initScreen() {

  tft.begin();                            // Connect to LCD Screen
  tft.setRotation(3);                   // Rotate Screen 270 Degrees

  tft.setFrameBuffer(screenBuffer);   // Initialize Frame Buffer
  tft.useFrameBuffer(1);                // Use Frame Buffer

  tft.fillScreen(ILI9341_BLACK);      // Clear Screen

}

//////////////////////////////////////////////////////////////////////////////////////
//ensures screen is functioning properly
void screenTest() {
  if (tester.check()) {
    flop = !flop;
  }
  if (flop) {
    tft.fillScreen(ILI9341_WHITE);      // Fill Screen
  }
  else {
    tft.fillScreen(ILI9341_BLACK);      // Clear Screen
  }

  tft.updateScreen();
}
