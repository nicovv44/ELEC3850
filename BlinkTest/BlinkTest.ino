/*
 * STM32F4-DISCOVERY
 * Example 1:  LEDs
 */

int userButtonPin = PA0;
 
void setup() {
  // put your setup code here, to run once:
  
  // Set the MCU's pin data direction.
  pinMode(PD13, OUTPUT);
  pinMode(PD14, OUTPUT);
  pinMode(PD15, OUTPUT);
  pinMode(PD12, OUTPUT);
  pinMode(userButtonPin, INPUT);//user button

  // Set all outputs LOW to have all LED's initially turned off.
  digitalWrite(PD13, LOW);
  digitalWrite(PD14, LOW);
  digitalWrite(PD15, LOW);
  digitalWrite(PD12, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(userButtonPin) == HIGH){
    // Turn off the GREEN LED, turn on the ORANGE LED and wait for 1000ms.
    digitalWrite(PD12, LOW);
    digitalWrite(PD13, HIGH);
    delay(100);
  }

  if(digitalRead(userButtonPin) == HIGH){
    // Turn off the ORANGE LED, turn on the RED LED and wait for 1000ms.
    digitalWrite(PD13, LOW);
    digitalWrite(PD14, HIGH);
    delay(100);
  }

  if(digitalRead(userButtonPin) == HIGH){
    // Turn off the RED LED, turn on the BLUE LED and wait for 1000ms.
    digitalWrite(PD14, LOW);
    digitalWrite(PD15, HIGH);
    delay(100);
  }

  if(digitalRead(userButtonPin) == HIGH){
    // Turn off the BLUE LED, turn on the GREEN LED and wait for 1000ms.
    digitalWrite(PD15, LOW);
    digitalWrite(PD12, HIGH);
    delay(100);
  }

  // The code in the "loop()" statement will automatically repeat.
}
