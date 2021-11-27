#include "Keyboard.h"
#define KEY_SPACE_ARROW    0x20 // "space" 

class MovementZ {
  
    int Movement_z;
    
  public:

  MovementZ(int z) { // constructor
    Movement_z = z; 
  }

  void Update(int z) {
      Movement_z = z ;
      //Serial.println(("z  = ") + Movement_z); //  for debbing
      if(Movement_z > 12){ // the player want to headbutt
        Keyboard.press(KEY_SPACE_ARROW);
        Keyboard.releaseAll();
      }
    }
  };
