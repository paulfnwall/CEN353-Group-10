// Create baseGame function  
void baseGame () 
{    
  for (int y=turn; y <= turn; y++)
  { 
   Serial.println(""); //Some serial output to follow along
   Serial.print("Turn: ");
   Serial.print(y);
   Serial.println(" ");
   outputArray[y] = random(1, 6); 
   for (int x=0; x <= turn; x++)
   { 
     Serial.print(outputArray[x]);
     //Serial.println("");

     //If the outputArray is 1, turn on and red LED and play the tone associated with it
     if (outputArray[x] == 1)
     {  
       digitalWrite(redLED, HIGH);
       playTone(ledNotes[3], 200); 
       delay(200);
       digitalWrite(redLED, LOW);
       delay(100);
     }

     //If the outputArray is 2, turn on and green LED and play the tone associated with it
     if (outputArray[x] == 2) 
     {
       digitalWrite(greenLED, HIGH);
       playTone(ledNotes[2], 200);
       delay(200);
       digitalWrite(greenLED, LOW);
       delay(100);
     }

     //If the outputArray is 3, turn on and blue LED and play the tone associated with it
     if (outputArray[x] == 3) 
     {
       digitalWrite(blueLED, HIGH);
       playTone(ledNotes[1], 200);
       delay(200);
       digitalWrite(blueLED, LOW);
       delay(100);
     }

     //If the outputArray is 4, turn on and yellow LED and play the tone associated with it
     if (outputArray[x] == 4) 
     {
       digitalWrite(yellowLED, HIGH);
       playTone(ledNotes[0], 200);
       delay(200);
       digitalWrite(yellowLED, LOW);
       delay(100);
     }

     //If the outputArray is 5, turn on and white LED and play the tone associated with it
     if (outputArray[x] == 5) 
     {
       digitalWrite(whiteLED, HIGH);
       playTone(ledNotes[0], 200);
       delay(200);
       digitalWrite(whiteLED, LOW);
       delay(100);
     }
   }
  }
}
 
