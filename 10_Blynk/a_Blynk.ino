#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "Lintang";
char pass[] = "lintang2611";
char token[] = "aBzl6CwJ_Y1axyQ_9V3zM56To5ttMc__";

void setup(){
  Serial.begin(115200);
  Blynk.begin(token, ssid, pass);
}

void loop(){
  Blynk.run();
}
