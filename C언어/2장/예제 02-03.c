#include <stdio.h>

int main(void)
{
    printf("Be happy\n");  /*be happy를 출력하고 줄바꿈(\n)*/
    printf("12345678901234567890\n");  /*화면에 열 번호 출력하고 줄바꿈(\n)*/
    printf("My\tfrined\n");  /*My를 출력하고 탭위치(\t)로 이동후에 friend를 출력하고 줄바꿈(\n)*/
    printf("Goot\bd\tchance\n");  /*t를 d로 바꾸고 탭위치로 이동(\t)후에 chance를 출력하고 줄바꿈(n)*/
    printf("Cow\rW\a\n");  /*맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈(\n)*/

    return 0;
}