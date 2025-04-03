//https://www.usinainfo.com.br/blog/projeto-arduino-girassol-seguidor-de-luz/
#include "Servo.h"

Servo myservo;

int pos = 0; 
int inputPhotoLeft = 1; 
int inputPhotoRight = 0;

int Left = 0; 
int Right = 0; 

void setup()  {
Serial.begin(9600);
myservo.attach(9);
}

void loop()  {
Left = analogRead(inputPhotoLeft);
Right = analogRead(inputPhotoRight);
Serial.println(Left);
Serial.println(Right);

if (Left > (Right +20))  {
if (pos < 179)
pos++;
myservo.write(pos);
}

if (Right > (Left +20))  {
if (pos > 1)
pos -= 1;
myservo.write(pos); 
}

delay(10);
}
