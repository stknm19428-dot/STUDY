#include <stdio.h>

int main(void)
{
    int a = 30;
    int res;

    res = (a > 10) && (a < 20);  /*조항과 우항이 모두 참이면 참*/
    printf("res=(a > 10) && (a < 20) : %d\n", res);

    res = (a < 10) || (a > 20);  /*좌항과 우항 중 하나라도 참이면 참*/
    printf("res=(a < 10) || (a > 20) : %d\n", res);

    res = !(a >= 30);  /*거짓이면 참, 참이면 거짓*/
    printf("res = !(a>=30) : %d\n", res);

    return 0;
}