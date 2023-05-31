
#include <SoftwareSerial.h>  // Bluetooth Library.
#include <DHT11.h>  // DHT11 Library

#define TP_PIN 7
#define TXD 2
#define RXD 3

SoftwareSerial BTSerial(TXD, RXD);
DHT11 dht11(TP_PIN);

String Command_String = ""; 
String Split_result[6];       // Save the result of the split function.

void setup() {
  
  Serial.begin(9600);
  BTSerial.begin(9600);
  while (!BTSerial);  // Wait until serial communication is available.
  delay(200);
  BTSerial.println("Welcome, Jin Dao Xuan");
}

void loop()
{
  float temp, humi;
  dht11.read(humi, temp);
  BTSerial.print("Temperature = ");
  BTSerial.print(temp);
  BTSerial.print(", Humidity = ");
  BTSerial.println(humi);
  delay(5000);
}


