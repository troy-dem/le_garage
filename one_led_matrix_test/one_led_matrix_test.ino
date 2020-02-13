#include "LedControl.h"

/*
 pin 2 is connected to the DataIn 
 pin 4 is connected to the CLK 
 pin 3 is connected to LOAD 
 ***** Please set the number of devices you have *****
 */
LedControl lc=LedControl(12,10,11,1);

const int addrL = 0;  // first LED matrix - Left robot eye
/*const int addrR = 1;  // second LED matrix - Right robot eye*/

void setup() {
  /*The MAX72XX is in power-saving mode on startup*/
  lc.shutdown(addrL,false);
  /*lc.shutdown(addrR,false);*/
  /* Set the brightness to max values */
  lc.setIntensity(addrL,8);
  /*lc.setIntensity(addrR,15);*/
  /* and clear the display */
  lc.clearDisplay(addrL);
  /*lc.clearDisplay(addrR);*/
  delay(300);
}

void loop() {
  // put your main code here, to run repeatedly:
  
 lc.setRow(0,2,B10110000);
 delay(1000);
 lc.setRow(0,6,B00010000);
 delay(700);
}
