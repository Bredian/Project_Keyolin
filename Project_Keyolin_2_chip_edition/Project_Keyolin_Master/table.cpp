/*WARNING! THIS WORKS ONLY WITH CURRENT FFT SETUP!*/
#include "table.h"
#include "Arduino.h"
int shift=0, control=0; 
char NOTE(double value){

    if(shift==1) Serial.println("Shift");
    if(control==1) Serial.println("control");
    /*First test: write 'kek' and delete it - passed*/
	  if(value>=240 && value<=250 )
		  return 'a';
	  if((value>=260 && value<=270))
		  return 'b';
	  if(value>=280 && value<=280)    
		  return 'c';
		if(value>=290 && value<=300){
      return 'd';
	  }
   /*Second test: multiline text - 2 lines 'lol'*/
    if(value>=310 && value<=320){
      return 'e';
    }
    if(value>=330 && value<=340)
      return 'f';
    if(value>=350 && value<=360)
      return 'g';
    /*Third test: make capitals*/
    if(value>=370 && value<=380){
      return 'h';
    }
    /*Fourth test: change language*/
    if(value>=400 && value<=410){
      return 'i';
    }
    /*Letters for azaza*/
    if(value>=420 && value<=430)
      return 'j';
    if(value>=450 && value<=460)
      return 'k';

} 
