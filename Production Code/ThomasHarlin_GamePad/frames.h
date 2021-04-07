#include <Metro.h>                           // This adds the Metro library to your sketch
Metro fpsCount = Metro(1000);                // A prototype for a Metro timer

//frames rendered
int frames = 0;

//function to count each cycle the program has made, print it once a second,
//then reset it for next time
void fps() {
  frames++;
  if (fpsCount.check()) {
    Serial.print("Frames This Second:");
    Serial.println(frames);
    frames = 0;
  }
}
//////////////////////////////////////////////////////////////////////////////////////
