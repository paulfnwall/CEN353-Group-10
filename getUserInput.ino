// Create userInput Function
void getUserInput () 
{ 

 // Go through this loop for each light in a sequence
 for (int x=0; x <= turn;)
 {
   // Read the state of the buttons
   redButtonState = digitalRead(redButton);
   greenButtonState = digitalRead(greenButton);
   blueButtonState = digitalRead(blueButton);
   yellowButtonState = digitalRead(yellowButton);
   whiteButtonState = digitalRead(whiteButton);

   // Check if red button is pushed
   if (redButtonState == HIGH)
   { 
     // Turn light on, play sound, add light number to the input array
     // and print light number
     digitalWrite(redLED, HIGH);
     playTone(ledNotes[3], 200);
     delay(200);
     digitalWrite(redLED, LOW);
     inputArray[x] = 1;
     delay(50);
     Serial.print(1);

     // Compare game array to user input array
     if (inputArray[x] != outputArray[x]) 
     { 
       // Call incorrectAnswer function if user input is incorrect
        incorrectAnswer ();                              
     }                                  
     x++;
   }

   // Check if green button is pushed
   if (greenButtonState == HIGH)
   {
     // Turn light on, play sound, add light number to the input array
     // and print light number
     digitalWrite(greenLED, HIGH);
     playTone(ledNotes[2], 200);
     delay(200);
     digitalWrite(greenLED, LOW);
     inputArray[x] = 2;
     delay(50);
     Serial.print(2);

     // Compare game array to user input array
     if (inputArray[x] != outputArray[x]) 
     {
       // Call incorrectAnswer function if user input is incorrect
       incorrectAnswer ();
     }
     x++;
   }

   // Check if blue button is pushed
   if (blueButtonState == HIGH)
   {
     // Turn light on, play sound, add light number to the input array
     // and print light number
     digitalWrite(blueLED, HIGH);
     playTone(ledNotes[1], 200);
     delay(200);
     digitalWrite(blueLED, LOW);
     inputArray[x] = 3;
     delay(50);
     Serial.print(3);

     // Compare game array to user input array
     if (inputArray[x] != outputArray[x]) 
     {
       // Call incorrectAnswer function if user input is incorrect
       incorrectAnswer ();
     }
     x++;
   }

   // Check if yellow button is pushed 
   if (yellowButtonState == HIGH)
   {
     // Turn light on, play sound, add light number to the input array
     // and print light number
     digitalWrite(yellowLED, HIGH);
     playTone(ledNotes[0], 200);
     delay(200);
     digitalWrite(yellowLED, LOW);
     inputArray[x] = 4;
     delay(50);
     Serial.print(4);

     // Compare game array to user input array
     if (inputArray[x] != outputArray[x]) 
     {
       // Call incorrectAnswer function if user input is incorrect
       incorrectAnswer ();
     }
     x++;
   } 
   
   // Check if white button is pushed 
   if (whiteButtonState == HIGH)
   { 
     // Turn light on, play sound, add light number to the input array
     // and print light number
     digitalWrite(whiteLED, HIGH);
     playTone(ledNotes[0], 200);
     delay(200);
     digitalWrite(whiteLED, LOW);
     inputArray[x] = 5;
     delay(50);
     Serial.print(5);

     // Compare game array to user input array
     if (inputArray[x] != outputArray[x]) 
     {
       // Call incorrectAnswer function if user input is incorrect
       incorrectAnswer ();
     }
     x++;
   }
  }
 delay(500);
 // Increment turn count
 turn++; 
}
