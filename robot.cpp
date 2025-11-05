 #include <Servo.h>


Servo leftLeg;
Servo rightLeg;
Servo leftArm;
Servo rightArm;

void setup() {
  leftLeg.attach(3);
  rightLeg.attach(5);
  leftArm.attach(6);
  rightArm.attach(9);
}


void walkForward() {
  
  leftLeg.write(60);
  rightLeg.write(120);
  delay(500);
  
  
  leftLeg.write(120);
  rightLeg.write(60);
  delay(500);
}


void liftArms() {
  leftArm.write(30);  
  rightArm.write(150); 
  delay(1000);
  
  leftArm.write(90);   
  rightArm.write(90);
  delay(1000);
}

void loop() {
  walkForward();  
  liftArms();    
}
