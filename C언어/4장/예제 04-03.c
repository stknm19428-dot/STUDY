#include <stdio.h>

int main(void)
{
    int a = 10, b = 10;

    ++a;
    --b;

    printf("a : %d\n", a);  /*변수의 값을 1만큼 증가*/
    printf("b : %d\n", b);  /*변수의 값을 1만큼 감소*/

    return 0;
}