long rN;
void setup() {                
  pinMode(2, OUTPUT);           //Set output pins
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  rN = random(1,6);             //Generate random number between 1 and 6

     if (rN == 1){              //If random number is 1, write 1 in 7-segment display
     digitalWrite(4, HIGH);
     digitalWrite(5, HIGH);
     delay(2000);               //Delay for how long display stays on 1
     }

     else if (rN == 2){         //If random number is 2, write 2 in 7-segment display
     digitalWrite(4, HIGH);
     digitalWrite(3, HIGH);
     digitalWrite(8, HIGH);
     digitalWrite(7, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(9, HIGH);
     delay(2000);               //Delay for how long display stays on 2
     }
     
    else if (rN == 3){        //If random number is 3, write 3 in 7-segment display
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    delay(2000);              //Delay for how long display stays on 3
    }
    
    else if (rN == 4){        //If random number is 4, write 4 in 7-segment display
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(9, HIGH);
    delay(2000);              //Delay for how long display stays on 4
    }
    
    else if (rN == 5){        //If random number is 5, write 5 in 7-segment display
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(9, HIGH);
    delay(2000);              //Delay for how long display stays on 5
    }
    
   else if (rN == 6){         //If random number is 6, write 6 in 7-segment display
   digitalWrite(2, HIGH);
   digitalWrite(3, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(9, HIGH);
   digitalWrite(8, HIGH);
   delay(2000);               //Delay for how long display stays on 6
   }
   
   digitalWrite(2, LOW);      //After displaying a number turn the display off
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
   delay(10);                 //Delay before running the loop again
}
            
