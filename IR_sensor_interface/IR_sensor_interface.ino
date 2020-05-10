

/* IoT Workshop 27,28 Nov (Day1), UIT */
/* IR sensor Interface program for Node MCU */

int state;
void setup() {
  // put your setup code here, to run once:
    pinMode(16, INPUT);   // Making D0 as digital input
    Serial.begin(9600);   // Serial Monitor baud rate
}

void loop() {
  // put your main code here, to run repeatedly:
 state = digitalRead(16);  //Reading Digital input
 if (state == LOW){        //Condition accoring to input state     
  Serial.println("Move");
  }else {
   Serial.println("Stop");
    }
    delay(1);
}
