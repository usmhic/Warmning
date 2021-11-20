#include "DHT.h"  
DHT dht1(2, DHT11);
DHT dht2(3, DHT11);

const float c1 = -42.379;
const float c2 = 2.04901523;
const float c3 = 10.14333127;
const float c4 = -.22475541;
const float c5 = -0.00683783;
const float c6 = -0.05481717;
const float c7 = 0.00122874;
const float c8 = 0.00085282;
const float c9 = -0.00000199;
const float r = 51;
const float t = 66;

void setup(void) {
  Serial.begin(9600);
  dht1.begin();
  dht2.begin();
}

void loop() {

  float DHT11_t = dht1.readTemperature();
  float DHT11_h = dht1.readHumidity();
  float DHT11_i = (c1 + (c2 * DHT11_t) +
                           (c3 * DHT11_h) +
                           (c4 * DHT11_t*DHT11_h) +
                           (c5 * (DHT11_t*DHT11_t)) +
                           (c6 * (DHT11_h * DHT11_h)) +
                           (c7 * (DHT11_t * DHT11_t) * DHT11_h) +
                           (c8 * DHT11_t * (DHT11_h * DHT11_h)) +
                           (c9 * (DHT11_t * DHT11_t) * (DHT11_h * DHT11_h))- r);
  float DHT21_t = dht2.readTemperature();
  float DHT21_h = dht2.readHumidity();
  float DHT21_i = (c1 + (c2 * DHT21_t) +
                           (c3 * DHT21_h) +
                           (c4 * DHT21_t*DHT21_h) +
                           (c5 * (DHT21_t*DHT21_t)) +
                           (c6 * (DHT21_h * DHT21_h)) +
                           (c7 * (DHT21_t * DHT21_t) * DHT21_h) +
                           (c8 * DHT21_t * (DHT21_h * DHT21_h)) +
                           (c9 * (DHT21_t * DHT21_t) * (DHT21_h * DHT21_h))- r);
    Serial.print("✦ ZONE 1 → ");
    Serial.print("Humidity: ");
    Serial.print(DHT11_h + 10);
    Serial.println("%");
    Serial.print(" → Temperature: ");
    Serial.print(DHT11_t);
    Serial.println("°C");
    Serial.print(" → Heat Stress: ");
    Serial.print(DHT11_i);
    Serial.println("°C");

    Serial.print("✦ ZONE 2 → ");
    Serial.print("Humidity: ");
    Serial.print(DHT21_h);
    Serial.println("%");
    Serial.print(" → Temperature: ");
    Serial.print(DHT21_t);
    Serial.println("°C");
    Serial.print(" → Heat Stress: ");
    Serial.print(DHT21_i);
    Serial.println("°C");

  delay(8000);
}
