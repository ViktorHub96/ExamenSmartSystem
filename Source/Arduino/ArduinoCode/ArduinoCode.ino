#include <Servo.h> 
#define trigPin1 9
#define echoPin1 10
#define trigPin3 7
#define echoPin3 8
Servo myservo;
int led = 6;
long duration, distance,FrontSensor,RightSensor;
char data; 
int test;

void setup()
{
Serial.begin (9600);
pinMode(trigPin1, OUTPUT);
pinMode(echoPin1, INPUT);
pinMode(trigPin3, OUTPUT);
pinMode(echoPin3, INPUT);
pinMode(led,OUTPUT);
myservo.attach(5);
//myservo.write(0);  // set servo to mid-point

}
 
void loop() {
SonarSensor(trigPin1, echoPin1);
RightSensor = distance;
SonarSensor(trigPin3, echoPin3);
FrontSensor = distance;

//Serial.print("FirstSensor: ");
//Serial.print(RightSensor);
//Serial.print(" - ");
//Serial.print("SecondSensor: ");
//Serial.println(FrontSensor);
CheckRightC();
Bluetooth();
}
 
void SonarSensor(int trigPin,int echoPin)
{
digitalWrite(trigPin, LOW);
delayMicroseconds(20000);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10000);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
 
}

void Bluetooth(){
  while(Serial.available() > 0)      // Send data only when you receive data:
   {
      data = Serial.read(); 
   }
      //Serial.print(data);          //Print Value inside data in Serial monitor
      //Serial.print("\n");        
      if(data == '6'){
          myservo.write(60);
          Serial.println("60");
        }
      if(data == '2'){
          myservo.write(120);
        }
      if(data == '8'){
          myservo.write(180);
        }
         
   
}
void CheckRightC(){
  
  if (RightSensor == 31 && FrontSensor == 12){
  digitalWrite(led, HIGH);  
  }
  else{
  digitalWrite(led, LOW);  
  }
  
}
