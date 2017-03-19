#include <Servo.h>
Servo servo;

//variables
int left_forward = 12;
int left_reverse = 10;
int right_forward = 9;
int right_reverse = 6;
int pin_servo = 5;
int pin_laser = 3;
int laser_time_shot = 1000;
int laser_pwm_on = 50;
int laser_pwm_shot = 180;

void setup() {
  pinMode(left_forward, OUTPUT);
  pinMode(left_reverse, OUTPUT);
  pinMode(right_forward, OUTPUT);
  pinMode(right_reverse, OUTPUT);
  servo.attach(pin_servo);
  servo.write(0); 
  pinMode(pin_laser, OUTPUT);

  Serial.begin (9600); //230400
  Serial.setTimeout(30); //milliseconds Serial.readBytesUntil(), Serial.readBytes(), Serial.parseInt() or Serial.parseFloat()
}

void loop() {
  controlPC();
  while (true) {
    delay(10);
  }
}
