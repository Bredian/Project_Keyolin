#include "Arduino.h"
#include <Keyboard.h>
int shift=0, control=0;
void mash(char note, char *instrument){
  if(strcmp(instrument,"violin")==0){
    if(note=='a'){
      Keyboard.write('k');
    }
    if(note=='b'){
      Keyboard.write('e');
    }
    if(note=='c'){
      Keyboard.write(' ');
    }
    if(note=='d'){
      Keyboard.press(KEY_BACKSPACE);
      Keyboard.release(KEY_BACKSPACE);
    }
    if(note=='e'){
      Keyboard.press(KEY_RETURN);
      Keyboard.release(KEY_RETURN);
    }
    if(note=='f'){
      Keyboard.write('l');
    }
    if(note=='g'){
      Keyboard.write('o');
    }
    if(note=='h'){
      if(shift==0){
      Keyboard.press(KEY_LEFT_SHIFT);
      control=1;
      }
      if(shift==1){
      Keyboard.release(KEY_LEFT_SHIFT);
      shift=0;
      }
    }
    if(note=='i'){
      if(control==0){
      Keyboard.press(KEY_LEFT_CTRL);
      control=1;
      }
      if(control==1){
      Keyboard.release(KEY_LEFT_CTRL);
      control=0;
      }
    }
    if(note=='j'){
      Keyboard.write('a');
    }
    if(note=='k'){
      Keyboard.write('z');
    }
    if(note=='l'){
      Keyboard.write('1');
    }
  }
}

