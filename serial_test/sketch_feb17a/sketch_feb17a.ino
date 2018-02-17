#include <SoftwareSerial.h>
#include <math.h>
#include <time.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(57600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


  Serial.println("Goodnight moon!");
}

void loop() { // run over and over  
  int t = 0;
  double val = 0;
  while (true){
    t++;
    val = sin(t);
    Serial.println(val, 6);
  }
  
}
