// measure distance with ultrasonic sensor US - 015

// define pins numbers
const int trigPin = 2;  //D4
const int echoPin = 0;  //D3

// define variables
float distance, duration;

// sound speed = 334 m/s
// 334 / 10000 = 0.034 
// 10000 represents 10000 cm which is equal to 100m
float soundSpeed = 0.034;

// contains code to run once:
void setup() {
  Serial.begin(9600);       // start the serial communication
  pinMode(trigPin, OUTPUT); // sets the trigPin as an Output
  pinMode(echoPin, INPUT);  // sets the echoPin as an Input  
}

// contains the code that will run infinetely
void loop() {

 // clear the trigPin
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);

 // sets the trigPin on HIGH state for 10 micro secons
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);

 // read the echoPin value
 // return the sound wave travel time in microseconds
 duration = pulseIn(echoPin, HIGH);

 // calculate the distance
 distance= duration*0.034/2;

 // print the distance to serial monitor
 Serial.println();
 Serial.print("Distance = ");
 if(distance >= 400 || distance <= 2){
  Serial.print("Out of range");
 } else{
   Serial.print(distance);
   Serial.print(" cm");
   delay(1000);
 }
delay(1000);

}
