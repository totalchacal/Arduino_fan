#include <Stepper.h>

const int buttonPin = 7;     // the number of the pushbutton pin

const float SETPS_PER_REV = 32;
const float GEAR_RED = 64;

const float STEPS_PER_OUT_REV = SETPS_PER_REV * GEAR_RED;

int buttonState = 0;         // variable for reading the pushbutton status
int StepsRequired;

Stepper steppermotor(STEPS_PER_OUT_REV, 8, 10, 9, 11);
void setup() {

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  StepsRequired  =  STEPS_PER_OUT_REV / 1;   
  steppermotor.setSpeed(20);  
  steppermotor.step(StepsRequired);

}
