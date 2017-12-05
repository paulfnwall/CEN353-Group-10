int whiteButton = 6;                        //Blue button pin
int redButton = 5;                          // Red button pin
int greenButton = 4;                        // Green button pin
int blueButton = 3;                         // Blue button pin
int yellowButton = 2;                       // Yellow button pin

int whiteButtonState = LOW;                   //Blue button states et to off
int redButtonState = LOW;                    // Red button state set to off
int greenButtonState = LOW;                  // Green button state set to off
int blueButtonState = LOW;                   // Blue button state set to off
int yellowButtonState = LOW;                 // Yellow button state set to off

int whiteLED = 12;                             //Blue LED pin
int redLED = 11;                              // Red LED pin
int greenLED = 10;                            // Green LED pin
int blueLED = 9;                             // Blue LED pin
int yellowLED = 8;                           // Yellow LED pin

int pinArray[] = {12, 11, 10, 9, 8};            //For incorrect answer

int turn = 0;                                // Turn counter set to 0

int speakerPin = 7;                          // Speaker pin
int ledNotes [] = {300, 450, 600, 750, 900};   // Array of Notes for the buttons/lights

//Array of notes when user presses incorrect button
int wrongNotes [] = {1000, 1500, 2000, 2500, 3000}; 

int outputArray[100];                        // Array used for the game
int inputArray[100];                         // Array for user input

void setup() 
{
 // Initialize serial monitor
 Serial.begin(9600);            

 // Set led pins as output
 pinMode(whiteLED, OUTPUT);
 pinMode(redLED, OUTPUT);
 pinMode(greenLED, OUTPUT);
 pinMode(blueLED, OUTPUT);
 pinMode(yellowLED, OUTPUT);

 // Set button pins as input
 pinMode(whiteButton, INPUT);
 pinMode(redButton, INPUT);
 pinMode(greenButton, INPUT);
 pinMode(blueButton, INPUT);
 pinMode(yellowButton, INPUT);
 pinMode(speakerPin, OUTPUT);

 // This makes random more random
 randomSeed(analogRead(0)); 
}

void loop() 
{ 
  // Game function
  baseGame();
  
  // Input function
  getUserInput();
}
  
