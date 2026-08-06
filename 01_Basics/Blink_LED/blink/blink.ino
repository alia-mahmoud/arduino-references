
const int ledPin = 13; 
// this is a constant that stores which pin the LED is connected to on the ESP 32. 
// in my case, this happens to be pin 13 (D13 on my ESP 32)

void setup() {
  // put your setup code here, to run once:

  //configure pin 13 as an output so it can provide voltage.

  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // apply 5V to pin 8 by setting the led to "HIGH".
  // current will flow from the 220 Ohm R --> LED anode --> LED cathode --> GND.

  digitalWrite(ledPin, HIGH);

  // delay previous command (keep the LED on) for 500 milliseconds.
  delay(500);

  // set pin 13 to 0V.

  digitalWrite(ledPin, LOW);

  // keep it off for 500 ms.
  delay(500);

  // arduino will automatically keep looping until its disconnected.

}
