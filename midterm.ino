#include <Stepper.h> //including arduino stepper library

int revSteps = 32 * 64; //number of step for one output revolution is equal to steps per one internal rotation(32) times the gear reduction ratio(64)
int stepsRequired; //input of how many steps should be stepped 

Stepper steppermotor(revSteps, 8, 10, 9, 11); //from Stepper.h

void setup() {
// nothing needed in setup, Stepper sets pins and outputs
}

void loop() {
    steppermotor.setSpeed(500); //sets speed
    stepsRequired = revSteps * .25; //sets steps required to be 1/4 of a full revoltion CW
    steppermotor.step(stepsRequired); //steps the stepper motor the number of steps required
    delay(1000);

    steppermotor.setSpeed(1000);
    stepsRequired = -revSteps * .5; //sets steps required to be 1/2 full rotation CCW
    steppermotor.step(stepsRequired);
    delay(1000);

    steppermotor.setSpeed(500);
    stepsRequired = revSteps;
    steppermotor.step(stepsRequired);
    delay(1000);

    steppermotor.setSpeed(1000);
    stepsRequired = -revSteps;
    steppermotor.step(stepsRequired);
    delay(1000);

    stepsRequired = revSteps * .25;
    steppermotor.step(stepsRequired);
    delay(100);

    steppermotor.setSpeed(500);
    stepsRequired = revSteps*.25;
    steppermotor.step(stepsRequired);
    delay(100);

    steppermotor.setSpeed(100);
    stepsRequired = revSteps *.25;
    steppermotor.step(stepsRequired);
    delay(100);  

}
