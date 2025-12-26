#include <Arduino.h>

// pin definitions
const int IRpin_frontLeft = A1;
const int IRpin_frontRight = A2;
const int IRpin_midLeft = A3;
const int IRpin_midRight = A4;
const int IRpin_backLeft = A5;
const int IRpin_backRight = 0; //RX
const int IRpin_frontCenter = A0;

const int IMU_resetPin = 7;
const int IMU_interruptPin = 9;

const int Left_EncoderAPin = 10;
const int Left_EncoderBPin = 11;
const int Right_EncoderAPin = 12;
const int Right_EncoderBPin = 13;

const int Left_MotorAPin = 30; //sck
const int Left_MotorBPin = 29; //mosi
const int Right_MotorAPin = 28; //miso
const int Right_MotorBPin = 2;

void setup() {
  // put your setup code here, to run once:
pinMode(IRpin_frontLeft, INPUT);
pinMode(IRpin_frontRight, INPUT);
pinMode(IRpin_midLeft, INPUT);
pinMode(IRpin_midRight, INPUT);
pinMode(IRpin_backLeft, INPUT);
pinMode(IRpin_backRight, INPUT);
pinMode(IRpin_frontCenter, INPUT);

pinMode(IMU_resetPin, OUTPUT);
pinMode(IMU_interruptPin, INPUT);

pinMode(Left_EncoderAPin, INPUT);
pinMode(Left_EncoderBPin, INPUT);
pinMode(Right_EncoderAPin, INPUT);
pinMode(Right_EncoderBPin, INPUT);

pinMode(Left_MotorAPin, OUTPUT);
pinMode(Left_MotorBPin, OUTPUT);
pinMode(Right_MotorAPin, OUTPUT);
pinMode(Right_MotorBPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
