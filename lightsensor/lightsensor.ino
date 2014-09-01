int sensor = 0;    
int pinLed = 13;

void setup(){
  pinMode(pinLed, OUTPUT);
}

void loop(){
  if(analogRead(sensor) < 15){
    digitalWrite(pinLed, HIGH);  
  } else {
    digitalWrite(pinLed, LOW);
  }
}
