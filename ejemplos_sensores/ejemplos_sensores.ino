#include <Wire.h>
int tmp102Address = 0x48;
const int enable=5;

void setup(){
  SerialUSB.begin(9600);              
  Serial.begin(9600);                 
  //while (!SerialUSB);
  Wire.begin();
  pinMode(enable, OUTPUT);
}

void loop()
{
  send_info();
  delay(300000); //
}

void send_info()
{
  String bufer="AT$SF=";
  String bufer2="\n";
  float celsius = getTemperature();
  SerialUSB.print("Temperatura: ");
  SerialUSB.println(celsius);
  byte* a1=(byte*) &celsius;
  String str;
  for(int i=0;i<4;i++)
  {
    str=String(a1[i], HEX);
    if(str.length()<2)
    {
      bufer+=0+str;
    }
    else
    {
      bufer+=str;
    }
  }  
  bufer+=bufer2;
  digitalWrite(enable, HIGH);
  delay(1000);
  Serial.print("AT$RC\n");
  SerialUSB.print(bufer);
  Serial.print(bufer);
  delay(3000);
  digitalWrite(enable, LOW);
  delay(500);
}

float getTemperature()
{
  Wire.requestFrom(tmp102Address,2); 

  byte MSB = Wire.read();
  byte LSB = Wire.read();

  //it's a 12bit int, using two's compliment for negative
  int TemperatureSum = ((MSB << 8) | LSB) >> 4; 

  float celsius = TemperatureSum*0.0625;
  return celsius;
}
