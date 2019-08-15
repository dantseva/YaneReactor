int in_1 = 13;
int in_2 = 12;
int in_3 = 11;
int in_4 = 10;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(in_1, OUTPUT);
  pinMode(in_2, OUTPUT);
  pinMode(in_3, OUTPUT);
  pinMode(in_4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(in_1, HIGH);
  delay(500);
  digitalWrite(in_2, HIGH);
  delay(500);
  digitalWrite(in_3, HIGH);
  delay(500);
  digitalWrite(in_4, HIGH);
  delay(500);                     
  digitalWrite(in_1, LOW);
  delay(500); 
  digitalWrite(in_2, LOW);
  delay(500); 
  digitalWrite(in_3, LOW);
  delay(500); 
  digitalWrite(in_4, LOW);   
  delay(500);                      
}
