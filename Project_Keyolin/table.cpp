/*WARNING! THIS WORKS ONLY WITH CURRENT FFT SETUP!*/
#include "table.h"
#include "Arduino.h"
#include <Keyboard.h>
int shift=0, control=0; 
void button(double value, char * instrument){

  if(strcmp(instrument,"violin")==0){
    
    if(shift==1) Serial.println("Shift");
    if(control==1) Serial.println("control");
    /*First test: write 'kek' and delete it - passed*/
	  if(value>=520 && value<=540 )
		  Keyboard.write('k');
	  if((value>=274 && value<=280) || (value>=550 && value<=560))
		  Keyboard.write('e');
	  if(value>=300 && value<=313)    
     
		  Keyboard.write(' ');	
		if(value>=314 && value<=320){
		  Keyboard.press( KEY_BACKSPACE);
		  Keyboard.release(KEY_BACKSPACE);
	  }
   /*Second test: multiline text - 2 lines 'lol'*/
    if(value>=340 && value<=350){
      Keyboard.press(KEY_RETURN);
      Keyboard.release(KEY_RETURN);
    }
    if(value>=350 && value<=360)
      Keyboard.write('l');
    if(value>=380 && value<=390)
      Keyboard.write('o');
    /*Third test: make capitals*/
    if(value>=390 && value<=400){
      if(shift==0){
        shift=1;
        Keyboard.press(KEY_LEFT_SHIFT);
        return;
      }
      if(shift==1){
        shift=0;
        Keyboard.release(KEY_LEFT_SHIFT);
        return;
      }
    }
    /*Fourth test: change language*/
    if(value>=420 && value<=433){
      if(control==0){
        control=1;
        Keyboard.press(KEY_LEFT_CTRL);
        return;
      }
      else{
        control=0;
        Keyboard.release(KEY_LEFT_CTRL);
        return;
      }
    }
    /*Letters for azaza*/
    if(value>=435 && value<=450)
      Keyboard.write('a');
    if(value>=470 && value<=480)
      Keyboard.write('z');
  }
} 
