//OCT.20 2020 Created this file based on YM20201013_1_LED_MultiKeys

#include<Servo.h>

Servo servo_0;
int key_0=3;
int key_1=4;
int key_2=5;

int pin_s0=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(key_0,INPUT_PULLUP);
  pinMode(key_1,INPUT_PULLUP);
  pinMode(key_2,INPUT_PULLUP);

  servo_0.attach(pin_s0);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(LOW==digitalRead(key_0))
  {
      servo_0.write(180);

  }
  else
  {
      servo_0.write(0);

  }

  if(LOW==digitalRead(key_1))
  {

  }
  else
  {

  }

  if(LOW==digitalRead(key_2))
  {

  }
  else
  {

  }


  
}
