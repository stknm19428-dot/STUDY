#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

int LED_R=3;  /*적색 LED핀*/
int LED_G=5;  /*녹색 LED핀*/
int LED_B=6;  /*청색 LED핀*/

void setup()  /*초기화*/
{
  pinMode(LED_R, OUTPUT);  /*적색 LED 출력 설정*/  
  pinMode(LED_G, OUTPUT);  /*녹색 LED 출력 설정*/
  pinMode(LED_B, OUTPUT);  /*청색 LED 출력 설정*/
}
/*rgb_on(적색농도, 녹색농도, 청색농도, 켜는 시간(밀리초))*/
void rgb_on(int R, int G, int B, int ontime)
{
  analogWrite(LED_R, R);  /*적색 LED핀에 PWM 신호 출력*/
  analogWrite(LED_G, G);  /*녹색 LED핀에 PWM 신호 출력*/
  analogWrite(LED_B, B);  /*청색 LED핀에 PWM 신호 출력*/
  delay(ontime);  /*입력한 유지시간 만큼 지속*/
}

void rgb_off()  /*LED OFF 함수*/
{
  analogWrite(LED_R, 0);  /*적색 LED핀에 0V 출력*/
  analogWrite(LED_G, 0);  /*녹색 LED핀에 0V 출력*/
  analogWrite(LED_B, 0);  /*청색 LED핀에 0V 출력*/
}

void loop()
{
  rgb_on(255, 0, 0, 1000);  /*적색, 1초간 유지*/
  rgb_on(255, 5, 0, 1000);  /*주황색, 1초간 유지*/
  rgb_on(255, 50, 0, 1000);  /*노란색, 1초간 유지*/
  rgb_on(0, 100, 0, 1000);  /*초록색, 1초간 유지*/
  rgb_on(0, 0, 100, 1000);  /*파란색, 1초간 유지*/
  rgb_on(0, 0, 50, 1000);   /*남색, 1초간 유지*/
  rgb_on(150, 10, 120, 1000); /*보라색, 1초간 유지*/
}
