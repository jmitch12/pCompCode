/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor

 This example code is in the public domain.
 */

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;
int switchButton = 3;
int flexSensor = A0;
int randomSensor = A1;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  pinMode(switchButton, INPUT);
  pinMode(flexSensor, INPUT);
  pinMode(randomSensor, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  int switchState = digitalRead(switchButton);
  int flexState = analogRead(A0);
  int randomState = analogRead(A1);
  // print out the state of the button:
  Serial.println("push");
  Serial.println(buttonState);
  Serial.println("switch");
  Serial.println(switchState);
  Serial.println("flex");
  Serial.println(flexState);
  Serial.println("other");
  Serial.println(randomState);
  
  delay(1);        // delay in between reads for stability
}



