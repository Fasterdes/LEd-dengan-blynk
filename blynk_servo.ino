#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

#define BLYNK_PRINT Serial

Servo servo;
char auth[] = "BSEdfLdzdExmfoDjTxYz7sPqDI9jFun7";
char ssid[] = "Caldera";
char pswd[] = "Carstensz";

void setup(){
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pswd);
  servo.attach(16);
}

void loop (){
  Blynk.run();
}
BLYNK_WRITE(V1){
  servo.write(param.asInt());
}
