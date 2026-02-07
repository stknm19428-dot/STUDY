#include <stdio.h>  

int main(void)
{
    printf("Be happy\n");  //be happy 출력하고 줄을바꿈(\n)
    printf("12345678901234567890\n");  //1~20까지 출력하고 줄을바꿈(\n)
    printf("My\tfriend\n");  //My와 friend사이에 탭간격(\t)추가후 줄을 바꿈(\n)
    printf("Goot\bd\tchance\n");  /*Goot에서 o뒤에 백스페이스(\b)추가하여 Good으로 만들고
                                   d와 chance사이에 탭간격(\t)추가후 줄을 바꿈(\n)*/
    printf("Cow\rW\a\n");  //Cow에서 C를 캐리지리턴(\r)하여 W로 바꾸고 경고음(\a)추가후 줄을 바꿈(\n)

    return 0;
}