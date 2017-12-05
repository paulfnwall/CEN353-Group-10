/* 
This function was taken from the internet to make 
playing tones easier. This lets you play a tone for 
a specified amount of time in one line of code, 
opposed to the normal tone function where you need 
to turn the tone on in one line and off in another.
*/
void playTone(int tone, int duration) 
{
 for (long i = 0; i < duration * 1000L; i += tone * 2) 
 {
   //Start the tone
   digitalWrite(speakerPin, HIGH);
   delayMicroseconds(tone);
   //Stop the tone
   digitalWrite(speakerPin, LOW);
   delayMicroseconds(tone);
 }
}
