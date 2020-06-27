/*
        Title: 321Maker Experiment #008 - Buzzer
        Description: This program will turn on the buzzer when the SW1 button is pressed.
        Nicholas Santos, 2019
        October 17, 2019
*/
#include "pitches.h";
int buzzerPin  = 5 ;  //The buzzerPin is connected to pin 5 of the Arduino.
int button1Pin = 2;   //The SW1 button is connect to pin 2 of the Arduino.
int RGBRedPin = 9;    //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  //The blue RGB LED is connected pin 11 of the Arduino.

void setup() { //The Setup function runs once.
  pinMode(buzzerPin, OUTPUT);  //Setup buzzer as an output pin.
  pinMode(button1Pin, INPUT);  //Setup button1 pin as an input pin.
  pinMode(RGBRedPin, OUTPUT);
  pinMode(RGBGreenPin, OUTPUT);
  pinMode(RGBBluePin, OUTPUT);

}

void loop() { //The loop function runs forever.

  red();

  //Let Careless Whisper begin.

  if (digitalRead(button1Pin) == LOW) { //Check to see if button1 is pressed.
    intro();

    //The introduction loops to beginning here.

    intro();

  }
}
void red()    //Red color method
{
  analogWrite(RGBRedPin, HIGH);
  analogWrite(RGBGreenPin, LOW);
  analogWrite(RGBBluePin, LOW);
}

void green()    //Green color method
{
  analogWrite(RGBRedPin, LOW);
  analogWrite(RGBGreenPin, HIGH);
  analogWrite(RGBBluePin, LOW);
}

void blue()    //Blue color method
{
  analogWrite(RGBRedPin, LOW);
  analogWrite(RGBGreenPin, LOW);
  analogWrite(RGBBluePin, HIGH);
}

void intro()  //Introduction loop method
{
  tone(buzzerPin, NOTE_E5, 400);
  delay(400);
  blue();
  tone(buzzerPin, NOTE_D5, 200);
  delay(200);
  green();
  tone(buzzerPin, NOTE_A4, 400);
  delay(400);
  red();
  tone(buzzerPin, NOTE_F4, 400);
  delay(400);
  blue();
  tone(buzzerPin, NOTE_E5, 600);
  delay(600);
  green();
  tone(buzzerPin, NOTE_D5, 200);
  delay(200);
  red();
  tone(buzzerPin, NOTE_A4, 400);
  delay(400);
  blue();
  tone(buzzerPin, NOTE_F4, 600);
  delay(600);
  green();
  tone(buzzerPin, NOTE_C5, 400);
  delay(400);
  red();
  tone(buzzerPin, NOTE_AS4, 200);
  delay(200);
  blue();
  tone(buzzerPin, NOTE_F4, 400);
  delay(400);
  green();
  tone(buzzerPin, NOTE_D4, 400);
  delay(400);
  red();
  tone(buzzerPin, NOTE_C5, 600);
  delay(600);
  blue();
  tone(buzzerPin, NOTE_AS4, 200);
  delay(200);
  green();
  tone(buzzerPin, NOTE_F4, 400);
  delay(400);
  red();
  tone(buzzerPin, NOTE_D4, 600);
  delay(600);
  blue();
  tone(buzzerPin, NOTE_AS4, 400);
  delay(400);
  green();
  tone(buzzerPin, NOTE_A4, 200);
  delay(200);
  red();
  tone(buzzerPin, NOTE_F4, 400);
  delay(400);
  blue();
  tone(buzzerPin, NOTE_D4, 400);
  delay(400);
  green();
  tone(buzzerPin, NOTE_AS3, 1500);
  delay(1500);
  red();
  tone(buzzerPin, NOTE_A3, 400);
  delay(400);
  blue();
  tone(buzzerPin, NOTE_AS3, 400);
  delay(400);
  green();
  tone(buzzerPin, NOTE_C4, 400);
  delay(400);
  red();
  tone(buzzerPin, NOTE_D4, 400);
  delay(400);
  blue();
  tone(buzzerPin, NOTE_E4, 400);
  delay(400);
  green();
  tone(buzzerPin, NOTE_F4, 400);
  delay(400);
  red();
  tone(buzzerPin, NOTE_G4, 400);
  delay(400);
  blue();
  tone(buzzerPin, NOTE_A4, 400);
  delay(400);
}
