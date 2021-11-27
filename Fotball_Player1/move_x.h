#include "Keyboard.h"
#define KEY_LEFT_ARROW    0xD8 // "left" 
#define KEY_RIGHT_ARROW   0xD7 // "right" 

class MovementX {
  
    int Movement_x;
    
  public:

  MovementX(int x) { // constructor
    Movement_x = x; 
  }

  void Update(int x) {
      Movement_x = x;
      // Serial.println(("X  = ") + Movement_x);  //  for debugging
      
      if(Movement_x > 3){ // the player want to go left in the game
        //Serial.println("left"); // for debugging
        Keyboard.press(KEY_LEFT_ARROW);
        Keyboard.releaseAll();
        delay(20);
      }

      if(Movement_x < -3){
        //Serial.println("right"); // for debugging
        Keyboard.press(KEY_RIGHT_ARROW);
        Keyboard.releaseAll();
        delay(20);
    }
      
   }
 };
