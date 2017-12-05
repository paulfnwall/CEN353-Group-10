void playTone(int tone, int duration) 
{
 for (long i = 0; i < duration * 1000L; i += tone * 2) 
 {
   //Set speakerPin to HIGH to play the tone
   digitalWrite(speakerPin, HIGH);
   delayMicroseconds(tone);
   //Set speakerPin to LOW to turn off the tone
   digitalWrite(speakerPin, LOW);
   delayMicroseconds(tone);
 }
}
