 /* Simulating the working of an AND Logic gate with an arduino. 
Sketch by Papa Kofi Boahen */ 

int inputPin1= 2; // pins to read the state of the inputs
int inputPin2 = 9; 

int outputPin = 8;  
int input1 = 0; // store the state of input1
int input2 = 0; // store the state of input2

int indicator1 = 4; // to control the state of the input1 indicator LED
int indicator2 = 3; // to control the state of the input2 indicator LED

void setup() {
     pinMode(outputPin, OUTPUT); 
     pinMode(inputPin1, INPUT);
     pinMode(inputPin2, INPUT);
} 

void loop(){     
    input1 = digitalRead(inputPin1); 
    input2 = digitalRead(inputPin2);
    
    // configure the LED indicators to turn on when pushbutton is pressed or otherwise if not being pressed
      if (input1 == HIGH)
        digitalWrite(indicator1, HIGH);
      else
        digitalWrite(indicator1, LOW);
      
      if (input2 == HIGH)
        digitalWrite(indicator2, HIGH);
      else
        digitalWrite(indicator2, LOW);
      
        /// code logic of a NOR GATE ///
    if (input1 == LOW && input2 == LOW)  
      digitalWrite(outputPin,HIGH); 
     
     
    else 
      digitalWrite(outputPin, LOW);

}
