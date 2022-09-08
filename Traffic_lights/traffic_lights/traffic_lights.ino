const byte redLedPin = 3;
const byte yellowLedPin = 5;
const byte greenLedPin = 6;

const int passTime = 6000;
const int standbyTime = 1500;

void setup() {

  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);

}

void loop() {

  lightOn(redLedPin, passTime);
  lightOn(yellowLedPin, standbyTime);
  
  lightOn(greenLedPin, passTime);
  lightOn(yellowLedPin, standbyTime);

}

void lightOn(byte ledPin, int lightingTime) {

  digitalWrite(ledPin, 1);
  
  delay(lightingTime);
  
  for(int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);
    delay(4);
  }

}
