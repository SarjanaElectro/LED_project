/*
Running LED Arduino by Sarjana Electro
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)                      // wait for a second
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW); 
  digitalWrite(4, HIGH);  
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW); 
  digitalWrite(8, HIGH); 
  digitalWrite(9, LOW); 
  digitalWrite(10, HIGH);  
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW); 
  delay(500);  
  digitalWrite(0, LOW); 
  digitalWrite(1, HIGH);  
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH); 
  digitalWrite(6, LOW); 
  digitalWrite(7, HIGH);  
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW); 
  digitalWrite(11, HIGH); 
  digitalWrite(12, LOW); 
  digitalWrite(13, HIGH);
  delay(500);                      
}
