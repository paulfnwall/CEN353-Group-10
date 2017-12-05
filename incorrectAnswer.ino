
void incorrectAnswer () 
{ 
  //Reset turn to -1 to reset the game
  turn = -1;
  
  /*Knight rider: Turn on one pin, turn on next pin, turn off previous pin
  Goes forward and back 3 times from blue LED to white LED
  Play a specific sound depending on which LED lights up
  Uses pinArray for LEDs and wrongNotes for sounds*/
  for(int k = 0; k < 3; k++)
  {
    for(int count=0;count<4;count++)
    {
     digitalWrite(pinArray[count], HIGH);
     playTone(wrongNotes[count], 50);
     delay(25);
     digitalWrite(pinArray[count + 1], HIGH);
     playTone(wrongNotes[count], 50);
     delay(25);
     digitalWrite(pinArray[count], LOW);
     delay(35);
    }
    
    for(int count=4;count>0;count--) 
    {
     digitalWrite(pinArray[count], HIGH);
     playTone(wrongNotes[count], 50);
     delay(25);
     digitalWrite(pinArray[count - 1], HIGH);
     playTone(wrongNotes[count], 50);
     delay(25);
     digitalWrite(pinArray[count], LOW);
     delay(25);
     digitalWrite(pinArray[count - 1], LOW);
     delay(25);
    }
  }
}

