
/* IoT Workshop 27,28 Nov (Day1), UIT */
/* Blink LED program for Node MCU */

//the setup function runs once when you press reset or power the board
void setup() {
  pinMode(D4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(D4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(D4, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

