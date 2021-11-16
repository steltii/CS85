void setup() {
  pinMode(2, OUTPUT);   
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  
//0
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      delay(100);
  //reset
      digitalWrite(2, LOW);   
      digitalWrite(3, LOW);   
      digitalWrite(4, LOW);   
      digitalWrite(5, LOW);   
      digitalWrite(6, LOW);   
      digitalWrite(7, LOW);        
      delay(100);

//1
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      delay(100);
  //reset
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      delay(100);
//2
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(9, HIGH);
      delay(100);
  //reset
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(9, LOW);       
      delay(100);
//3
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      delay(100);
  //reset
      digitalWrite(3, LOW);
      digitalWrite(6, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);        
      delay(100);
//4
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(9, HIGH);
      delay(100);
  //reset
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(8, LOW);
      digitalWrite(5, LOW);
      digitalWrite(9, LOW);       
      delay(100);
//5
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(9, HIGH);
      delay(100);
  //reset
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(8, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(9, LOW);        
      delay(100);
//6
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      delay(100);
  //reset
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);       
      delay(100);
 //7
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(9, HIGH);
      delay(100);
  //reset
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(9, LOW);      
      delay(100);
//8
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(100);
  //reset
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);       
      delay(100);
//9
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(100);
  //reset
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);      
      delay(100);
}
