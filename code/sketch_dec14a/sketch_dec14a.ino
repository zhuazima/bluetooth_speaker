  int ledPin = 2; 
  void setup() 
  { 
    pinMode(ledPin, OUTPUT); 
    Serial.begin(115200); 
  } 
  void loop() 
  { 
    Serial.print("Hello"); 
    digitalWrite(ledPin, HIGH); 
    delay(100); 
    Serial.println(" world!"); 
    digitalWrite(ledPin, LOW);
    delay(100); 
  }
