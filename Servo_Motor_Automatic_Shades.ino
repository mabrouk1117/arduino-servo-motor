#include <Servo.h>

Servo myservo;
int buttonPin = 2;  

int pos =0 ;
int buttonState = 0; 

void setup() {
  myservo.attach(9); 
  pinMode(buttonPin, INPUT);

  Serial.begin(9600); 

}

void loop() {

buttonState = digitalRead(buttonPin);
if (buttonState == HIGH) {
	for (pos = 0; pos < 90; pos += 1) 
	{         
		myservo.write(pos); 
		delay(15); 
	}
 	 for (pos = 90; pos >0; pos -= 1) 
	{         
		myservo.write(pos); 
		delay(15); 
	}
}
  
}
