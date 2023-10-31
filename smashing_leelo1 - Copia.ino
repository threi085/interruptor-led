const int pinButton = 2;
const int pinLed = 13;

int buttonState = 0;

void setup()
{
  pinMode(pinButton, INPUT);
  pinMode(pinLed, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(pinButton);
  if(buttonState == HIGH) {
	digitalWrite(pinLed, HIGH);
  }
  else {
    digitalWrite(pinLed, LOW);
  }
}