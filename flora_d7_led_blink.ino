
// add flora to arduino ide: https://learn.adafruit.com/getting-started-with-flora/blink-onboard-led
// add flora device via https://github.com/arduino/Arduino/wiki/Unofficial-list-of-3rd-party-boards-support-urls#list-of-3rd-party-boards-support-urls
// use this json file: https://adafruit.github.io/arduino-board-index/package_adafruit_index.json

// if flora port: /dev/cu.usbmodem is not available, press reset then upload after letting go of reset button
// see https://forums.adafruit.com/viewtopic.php?f=8&t=99683#p499888
// see https://forums.adafruit.com/viewtopic.php?f=24&t=38847

// flash the red led on flora - change the durations to confirm comms to the board is OK

// Pin D7 has an LED connected on FLORA.
// give it a name:
int led = 7;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
