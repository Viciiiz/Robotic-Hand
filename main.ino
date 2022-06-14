#include <PololuMaestro.h>
 
MiniMaestro maestro(Serial1);

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  Serial1.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability

  int current = 10000 - 10 * sensorValue;

// Set the target of channel 0 to 1500 us and channel 1 to 1750 us.
  maestro.setTarget(0, current);
//  maestro.setTarget(1, 7000);
 
//   Wait 2 seconds.
//  delay(2000);
 
//   Set the target of channel 0 to 1250 us and channel 1 to 2000 us.
//  maestro.setTarget(0, 7000);
//  maestro.setTarget(1, 8000);
 
  // Wait 2 seconds.
//  delay(2000);
}
