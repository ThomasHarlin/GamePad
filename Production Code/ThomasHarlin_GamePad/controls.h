#include <Bounce2.h>

int buttonBounce = 10;

Bounce * buttons = new Bounce[4];

Metro joyCount = Metro(2000);
Metro buttonCheck = Metro(25);



//what pins are each button attached too?
int buttonPins[] = {0, 1, 2, 3};
//state buffer for each button
int buttonBuffer[] = {0, 0, 0, 0};

//joystick pins (X,Y)
int joyPins[] = {15, 14};
//joystick buffer
int joyBuffer[] = {0, 0};


//////////////////////////////////////////////////////////////////////////////////////
void initControls() {
  for (int i = 0; i < 4; i++) {
    buttons[i].attach(buttonPins[i], INPUT_PULLUP);
    buttons[i].interval(buttonBounce);
  }
}
//////////////////////////////////////////////////////////////////////////////////////
//updates the controls and prints the resulting data
void getControls() {
  //Loop to get and update the buttons
  for (int i = 0; i < 4; i++) {
    buttons[i].update();

    //buttons has been pushed
    if (buttons[i].fell()) {
      buttonBuffer[i] = 1;
    }

    //button is no longer being pushed
    else if (buttons[i].rose()) {
      buttonBuffer[i] = 0;
    }

  }


  //loop to track the position of the joystick

  // information pertainig to the joysticks positioning
  //  int Yup = 0;
  //  int Ylow = 1023;
  //  int Yrest = 520;
  //  int Xleft = 1023;
  //  int Xright = 0;
  //  int Xrest = 520;


  //(1020,160)(550,0)(100,0)
  //(1023,530)(520,530)(0,530)
  //(950,1023)(580,1023)(190,1022)

  //Update Pots
  for (int i = 0; i < 2; i++) {
    int thisPot = analogRead(joyPins[i]);

    //maps the joystick value for X
    if (i == 0) {
      if (thisPot > 700) {
        joyBuffer[i] = -1;
      }
      else if (thisPot > 300 && thisPot < 700) {
        joyBuffer[i] = 0;
      }
      else if (thisPot < 300) {
        joyBuffer[i] = 1;
      }
    }
    //maps the joystick to Y
    else if (i == 1) {
      if (thisPot > 700) {
        joyBuffer[i] = 1;
      }
      else if (thisPot > 300 && thisPot < 700) {
        joyBuffer[i] = 0;
      }
      else if (thisPot < 300) {
        joyBuffer[i] = -1;
      }
    }

  }


}
//////////////////////////////////////////////////////////////////////////////////////
//control output tester
void testControls() {


  if (buttonCheck.check()) {
    //print pots
    for (int i = 0; i < 2; i++) {
      int thisPot = joyBuffer[i];

      if (i == 0) {
        Serial.print("X");
      }
      else {
        Serial.print("Y");
      }
      Serial.print(thisPot);
      Serial.print("\t");
    }
    Serial.println();


    //prints out current button states

    for (int i = 0; i < 4; i++) {
      int thisButton = buttonBuffer[i];
      Serial.print(thisButton);
      Serial.print("\t");
    }

    Serial.println();
  }


}

//////////////////////////////////////////////////////////////////////////////////////
//joystick orientation tester
void testJoy() {
  if (joyCount.check()) {
    Serial.print("Joy X");
    Serial.println(analogRead(joyPins[1]));

    Serial.print("Joy Y");
    Serial.println(analogRead(joyPins[0]));
  }
}
//////////////////////////////////////////////////////////////////////////////////////
