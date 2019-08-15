#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 10

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire); 

void setup() {
  Serial.begin(9600);
  Serial.println("Start");
  sensors.begin();
}

void loop() {
  Serial.print("Measure...");
  sensors.requestTemperatures();
  Serial.print("T=");
  Serial.println(sensors.getTempCByIndex(0));
}
