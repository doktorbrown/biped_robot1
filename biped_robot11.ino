#include <Servo.h>

int servoPin1 = 6; // Declare the Servo pin
int servoPin2 = 5; // Declare the Servo pin
int servoPin3 = 10; // Declare the Servo pin
int servoPin4 = 9; // Declare the Servo pin

int delayTime =10; //Set Global Delay Time

Servo LeftFoot; // Create a servo object
Servo RightFoot; // Create a servo object
Servo LeftHip; // Create a servo object
Servo RightHip; // Create a servo object

//
//FullRangeTest(){
//    LeftHip.write(0); 
//       delay(delayTime); 
//      LeftHip.write(90); 
//      delay(delayTime); 
//      LeftHip.write(180); 
//      delay(delayTime); 
//      LeftFoot.write(0); 
//      delay(delayTime); 
//      LeftFoot.write(90); 
//      delay(delayTime); 
//      LeftFoot.write(180); 
//      delay(delayTime); 
//      RightHip.write(0); 
//      delay(delayTime); 
//      RightHip.write(90); 
//      delay(delayTime); 
//      RightHip.write(180); 
//      delay(delayTime); 
//      RightFoot.write(0); 
//      delay(delayTime); 
//      RightFoot.write(90); 
//      delay(delayTime); 
//      RightFoot.write(180); 
//      delay(delayTime);
//}

//WobbleOne(){
//         LeftHip.write(60); 
//      delay(delayTime); 
//      LeftHip.write(110); 
//      delay(delayTime); 
//      LeftFoot.write(80); 
//      delay(delayTime);  
//      RightHip.write(60); 
//      delay(delayTime); 
//      RightHip.write(110); 
//      delay(delayTime); 
//      RightFoot.write(80); 
//      delay(delayTime); 
//}
void setup() { 
   // We need to attach the servo to the used pin number 
   LeftFoot.attach(servoPin1); 
   RightFoot.attach(servoPin2); 
   LeftHip.attach(servoPin3); 
   RightHip.attach(servoPin4); 
}
void loop()

{ 
   //figure out 0,45,90,120,150,180 and mark on servo horn for alignment
   //functionize if walk cycle is determined



      RightHip.write(90); 
//      delay(delayTime);

      LeftFoot.write(95); 
      delay(delayTime); 
      
       RightFoot.write(90); 
      delay(delayTime);

      RightHip.write(95); 
//      delay(delayTime); 

      LeftFoot.write(90); 
      delay(delayTime); 

      LeftHip.write(90); 
      delay(delayTime); 

      LeftFoot.write(75); 
      delay(delayTime); 

      RightFoot.write(90); 
      delay(delayTime); 

      RightFoot.write(75); 
      delay(delayTime); 

      LeftHip.write(95); 
      delay(delayTime); 
 	  
   	
}


