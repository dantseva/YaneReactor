#include <OneWire.h>
#include <DallasTemperature.h>
#define TEMP_BUS 8  // temp sensor pin


int in_1 = 12;  // relay pins 
int in_2 = 11;  //
int in_3 = 10;  //
int in_4 = 9;  //

float TEMP = 0;
float TEMP_LIMIT = 34;  // set up temp here!!!

OneWire oneWire(TEMP_BUS);                //
DallasTemperature temp_sensor(&oneWire);  // temp sensor init


void setup() {
  pinMode(in_1, OUTPUT);
  pinMode(in_2, OUTPUT);
  pinMode(in_3, OUTPUT);
  pinMode(in_4, OUTPUT);
  digitalWrite(in_1, HIGH);
  digitalWrite(in_2, HIGH);
  digitalWrite(in_3, HIGH);
  digitalWrite(in_4, HIGH);

  Serial.begin(9600);
  Serial.println("Start");
  temp_sensor.begin();
}

void loop() {
  // digitalWrite(in_1, LOW);
  // delay(500);
  // digitalWrite(in_1, HIGH);
  // delay(500);
  temp_sensor.requestTemperatures();
  TEMP = temp_sensor.getTempCByIndex(0);

  if (TEMP > TEMP_LIMIT) {
    digitalWrite(in_1, HIGH);
    
    Serial.print("T=");
    Serial.println(TEMP);
    }
  else {
    digitalWrite(in_1, LOW);

    Serial.print("T=");
    Serial.println(TEMP);
    }
}
