/*WARNING! THIS WORKS ONLY WITH CURRENT FFT SETUP!*/
#include "table.h"
#include "Arduino.h"
#include <Keyboard.h>

void button(double value, char * instrument){
  int shift=0, control=0; 
  if(strcmp(instrument,"violin")==0){
    /*First test: write 'kek' and delete it - passed*/
	  if(value>=530 && value<=549 )
		  Keyboard.write('k');
	  if(value>=550 && value<=570)
		  Keyboard.write('e');
	  if(value>=300 && value<=316)
		  Keyboard.write(' ');	
		if(value>=940 && value<=950){
		  Keyboard.press(KEY_BACKSPACE);
		  Keyboard.release(KEY_BACKSPACE);
	  }
   /*Second test: multiline text - 2 lines 'lol'*/
    if(value>=660 && value<=683){
      Keyboard.press(KEY_RETURN);
      Keyboard.release(KEY_RETURN);
    }
    if(value>=1410 && value<=1430)
      Keyboard.write('l');
    if(value>=1860 && value<=1900)
      Keyboard.write('o');
    /*Third test: make capitals*/
    if(value>=390 && value<=400){
      if(shift==0){
        shift=1;
        Keyboard.press(KEY_LEFT_SHIFT);
      }
      else{
        shift=0;
        Keyboard.release(KEY_LEFT_SHIFT);
      }
    }
    /*Fourth test: change language*/
    if(value>=840 && value<=850){
      if(shift==0){
        control=1;
        Keyboard.press(KEY_LEFT_CTRL);
      }
      else{
        control=0;
        Keyboard.release(KEY_LEFT_CTRL);
      }
    }
    /*Letters for azaza*/
    if(value>=900 && value<=910)
      Keyboard.write('a');
    if(value>=940 && value<=950)
      Keyboard.write('z');
  }
} 
