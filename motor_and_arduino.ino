#include "Servo.h"
int pos;
int message;
Servo servo;
const char* package[] = {"code:", "9", "Brazil", "RiodeJaneiro"};
void setup() {servo.attach(11);
Serial.begin(9600);}

void loop() {
message = Serial.read();
delay(2000);
int x = sizeof(package)/2;
if (message == 97)
{for(int o = 0; o < x; ++o){
  Serial.println(package[o]);}
  }
else{Serial.println(message);}
if (message == 98){  Serial.println(message);while (pos < 45) {
    pos = pos - 1; // серво поворачивается при каждом шаге на 5 градусов
    servo.write(pos);
    delay(20); // изменив значение можно ускорить или замедлить поворот
  }

  // плавный поворот от 45 до 0 градусов
    while (pos > 0) {
    pos = pos + 1;
    servo.write(pos);
    delay(20);
  }}
}
