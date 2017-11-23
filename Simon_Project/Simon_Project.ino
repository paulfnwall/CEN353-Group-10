boolean buttons [] = {10, 11, 12, 13};   // Button pins
int buttonState = 0;                     // Check button state    
boolean lights [] = {4, 5, 6, 7};        // LED pins
int notes[] = {262, 294, 330, 349};      // Array of tone values for the buzzer
int turn = 0;                            // Keep track of the # of turns

void setup() 
{
  // Set led pins to output
  for(int i=0; i<4; i++)
  {
    pinMode(lights[i], OUTPUT);
  }
  // Set button pins to input and off 
  for(int i=0; i<4; i++)
  {
    pinMode(buttons[i], INPUT);
    digitalWrite(button[i], LOW);
  }

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
