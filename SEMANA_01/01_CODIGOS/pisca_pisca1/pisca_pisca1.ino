void setup() {
  pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); 
  delay(200);            
  digitalWrite(13, LOW);  
  delay(200);   
  
  digitalWrite(9, HIGH); 
  delay(200);            
  digitalWrite(9, LOW);  
  delay(200);
  
  digitalWrite(12, HIGH); 
  delay(200);            
  digitalWrite(12, LOW);  
  delay(200);
  
  digitalWrite(8, HIGH); 
  delay(200);            
  digitalWrite(8, LOW);  
  delay(200);
  
  digitalWrite(11, HIGH); 
  delay(200);            
  digitalWrite(11, LOW);  
  delay(200);
  
  digitalWrite(5, HIGH); 
  delay(200);            
  digitalWrite(5, LOW);  
  delay(200);
  
  digitalWrite(10, HIGH); 
  delay(200);            
  digitalWrite(10, LOW);  
  delay(200);
  
  digitalWrite(6, HIGH); 
  delay(200);            
  digitalWrite(6, LOW);  
  delay(200);
}