void setup (){
Serial.begin (9600);
pinMode(ledPin,OUTPUT);
pinMode(buttonPin, INPUT);

}

void loop(){
  if (digitalRead(buttonPin) == HIGH) {  
    digitalWrite(ledPin, HIGH);  
    Serial.println("High - Fayez ");
  } else {  
    digitalWrite(ledPin, LOW);  
    Serial.println("Low - Fayez ");


}