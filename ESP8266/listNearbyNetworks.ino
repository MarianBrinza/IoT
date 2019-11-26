#include <ESP8266WiFi.h>

// this function will run only once
void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println();

  // disconnect any previous connections
  WiFi.disconnect();
  delay(1000);

  //scan for nearby networks
  int networks = WiFi.scanNetworks();
  Serial.print("Nearby networks found: ");
  Serial.println(networks);
  Serial.println();
  delay(500);

  Serial.println("Networks: ");
  for(int i=0; i < networks; i++){
    Serial.print("     1: ");
    Serial.println(WiFi.SSID(i));
  }

  Serial.println();
  Serial.println();
  Serial.println("Scan completed...");
}

void loop() {
  // put your main code here, to run repeatedly:

}
