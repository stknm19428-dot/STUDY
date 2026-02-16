#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

int led_pin=2;  //LED
int button_pin=3;  //스위치

void setup()  /*초기화*/
{
  pinMode(led_pin, OUTPUT);  /*LED 핀출력 포트 설정*/
  pinMode(button_pin, INPUT);  /*스위치 핀입력 포트 설정*/
}

/*스위치를 누를때 LED 켜짐*/
void loop()  /*무한 루프*/
{
  if (digitalRead(button_pin)==LOW)  /*스위치 누르면*/
  {
    digitalWrite(led_pin, HIGH);  /*LED ON*/
  }
  else{
    digitalWrite(led_pin, LOW);  /*스위치 누르지 않으면 LED OFF*/
  }
}
