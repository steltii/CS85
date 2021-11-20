void setup() {
  pinMode(2, OUTPUT);              //Set output pins
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  
//0                               //Writers number 0 on display
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      delay(100);                  //Delay for how long number is shown
  //reset                          //Turns display off
      digitalWrite(2, LOW);   
      digitalWrite(3, LOW);   
      digitalWrite(4, LOW);   
      digitalWrite(5, LOW);   
      digitalWrite(6, LOW);   
      digitalWrite(7, LOW);        
      delay(100);

//1                               //Writers number 1 on display
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      delay(100);                  //Delay for how long number is shown
  //reset                          //Turns display off
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      delay(100);
  
//2                               //Writers number 2 on display
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(9, HIGH);
      delay(100);                  //Delay for how long number is shown
  //reset                          //Turns display off
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
      digitalWrite(8, LOW);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(9, LOW);       
      delay(100);
  
//3                               //Writers number 3 on display
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      delay(100);                  //Delay for how long number is shown
  //reset                          //Turns display off
      digitalWrite(3, LOW);
      digitalWrite(6, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);        
      delay(100);
  
//4                               //Writers number 4 on display
      digitalWrite(2, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(9, HIGH);
      delay(100);                  //Delay for how long number is shown
  //reset                          //Turns display off
      digitalWrite(2, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(8, LOW);
      digitalWrite(5, LOW);
      digitalWrite(9, LOW);       
      delay(100);
  
//5                               //Writers number 5 on display
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(9, HIGH);
      delay(100);                  //Delay for how long number is shown
  //reset                          //Turns display off
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(8, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(9, LOW);        
      delay(100);
  
//6                               //Writers number 6 on display
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      delay(100);                  //Delay for how long number is shown
  //reset                          //Turns display off
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(9, LOW);
      digitalWrite(8, LOW);       
      delay(100);
  
 //7                               //Writers number 7 on display
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(9, HIGH);
      delay(100);                  //Delay for how long number is shown
  //reset                          //Turns display off
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(9, LOW);      
      delay(100);
  
//8                               //Writers number 8 on display
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(100);                  //Delay for how long number is shown
  //reset                          //Turns display off
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);       
      delay(100);
  
//9                               //Writers number 9 on display
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(9, HIGH);
      delay(100);                  //Delay for how long number is shown
  //reset                          //Turns display off
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(8, LOW);
      digitalWrite(9, LOW);      
      delay(100);
}
