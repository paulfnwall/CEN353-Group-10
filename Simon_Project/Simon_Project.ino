//LED Pins

//Button Pins


void setup() 
{
  //Generate array  

}

void loop() 
{
  //Play the game

}


///////////////// Put Functions Below This //////////////////////

void randomArray()
{
  for(c = 0; c < 20; c++)
  {
    //Generate an array of 20 random numbers from 0-4
    ranArray[c] = random(5);
  }
}

void game()
{
  for(c = 0; c < 20; c++)
  {
    //Blink LED associated with ranArray[c]

    //if user presses wrong button
    if()
    {
      //flash all LEDs and play long sound indicating lost
    }
    else
    {
      //Increment c to add another LED
      c++
    }
  }
}
