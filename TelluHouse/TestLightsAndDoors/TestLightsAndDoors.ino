#include <Servo.h>

Servo myservo1; 
Servo myservo2;

#define MIN_VALUE1 35
#define MAX_VALUE1 135


#define MIN_VALUE2 40
#define MAX_VALUE2 130

int pos1 = MIN_VALUE1; 
int pos2 = MIN_VALUE2; 

void setup() {
  //myservo1.attach(9);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void open_door1() {
  myservo1.attach(9);
  for (pos1 = MIN_VALUE1; pos1 <= MAX_VALUE1; pos1 += 1) {
    // in steps of 1 degree
    myservo1.write(pos1);
    delay(5);
  }
  myservo1.detach();
}

void open_door2() {
  myservo2.attach(10);
  for (pos2 = MIN_VALUE2; pos2 <= MAX_VALUE2; pos2 += 1) {
    // in steps of 1 degree
    myservo2.write(pos2);
    delay(5);
  }
  myservo2.detach();
}

void close_door1() {
  myservo1.attach(9);
  for (pos1 = MAX_VALUE1; pos1 >= MIN_VALUE1; pos1 -= 1) {
    // in steps of 1 degree
    myservo1.write(pos1);
    delay(5);
  }
  myservo1.detach();
}

void close_door2() {
  myservo2.attach(10);
  for (pos2 = MAX_VALUE2; pos2 >= MIN_VALUE2; pos2 -= 1) {
    // in steps of 1 degree
    myservo2.write(pos2);
    delay(5);
  }
  myservo2.detach();
}

void light_on_bedroom() { digitalWrite(2, HIGH); }
void light_off_bedroom() { digitalWrite(2, LOW); }

void light_on_upstairs() { digitalWrite(3, HIGH); }
void light_off_upstairs() { digitalWrite(3, LOW); }

void light_on_downstairs() { digitalWrite(4, HIGH); }
void light_off_downstairs() { digitalWrite(4, LOW); }

void light_on_bathroom() { digitalWrite(5, HIGH); }
void light_off_bathroom() { digitalWrite(5, LOW); }

void loop() {

  light_off_bedroom();
  light_off_upstairs();
  light_off_downstairs();
  light_off_bathroom();
  
  delay(1000);
  light_on_bedroom();
  delay(2000);
  open_door1();
  delay(500);
  light_on_upstairs();
  delay(2000);
  light_on_downstairs();
  delay(2000);
  open_door2();
  delay(500);
  light_on_bathroom();
  delay(1000);
  close_door2();
  delay(2000);
  close_door1();
  delay(500);
  light_off_bedroom();
  delay(1000);
  open_door2();
  delay(1000);
  light_off_bathroom();
  delay(500);
  close_door2();
  delay(2000);
  light_off_downstairs();
  delay(2000);
  open_door1();
  delay(500);
  light_on_bedroom();
  delay(1000);
  light_off_upstairs();
  delay(500);
  close_door1();
  delay(1000);
  light_off_bedroom();
  delay(1000);
  

}

