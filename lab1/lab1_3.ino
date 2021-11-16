long rN;
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
  rN = random(1,6);

     if (rN == 1){
     digitalWrite(4, HIGH);
     digitalWrite(5, HIGH);
     delay(2000);
     }

     else if (rN == 2){
     digitalWrite(4, HIGH);
     digitalWrite(3, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(9, HIGH);
     delay(2000);
     }
     
    else if (rN == 3){
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    delay(2000);
    }
    
    else if (rN == 4){
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(9, HIGH);
    delay(2000);
    }
    
    else if (rN == 5){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    delay(2000);
    }
    
   else if (rN == 6){
   digitalWrite(2, HIGH);
   digitalWrite(3, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(9, HIGH);
   digitalWrite(8, HIGH);
   delay(2000);
   }
   
   digitalWrite(2, LOW);
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
   delay(10);
}
            
