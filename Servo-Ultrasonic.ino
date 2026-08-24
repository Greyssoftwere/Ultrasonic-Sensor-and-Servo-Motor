#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 3;

const int threshold = 15;  // Activation distance in cm

const int angleNear = 180;  // Servo angle when object is close
const int angleFar = 0;    // Servo angle when object moves away

Servo myServo;

long getDistanceCM() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Read echo time
  long duration = pulseIn(echoPin, HIGH);

  // Convert time to distance in cm
  long distance = duration * 0.034 / 2;

  return distance;
}

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  myServo.attach(servoPin);
  myServo.write(angleFar);

  Serial.begin(9600);
}

void loop() {
  long distance = getDistanceCM();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= threshold) {
    myServo.write(angleNear);
  }
  else {
    myServo.write(angleFar);
  }

  delay(100);
}
