#include <Adafruit_CircuitPlayground.h>
#include "move_x.h"
#include "move_z.h"
#include "Keyboard.h"

// game : https://www.twoplayergames.org/game/head-soccer-2-player

MovementX move_X(0); // Setting up move_X object
MovementZ move_Z(0); // Setting up move_Z object


void setup() {
  CircuitPlayground.begin();
}
 
void loop() {
  if(CircuitPlayground.slideSwitch()) {
    move_X.Update(CircuitPlayground.motionX()); // check the X movement
    move_Z.Update(CircuitPlayground.motionZ()); // check the X movement


 }
}
