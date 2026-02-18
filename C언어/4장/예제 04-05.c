#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, c = 10;  /*a, b, c 값을 대입*/
    int res;  /*결괏값을 저장할 변수*/

    res = (a > b);
    printf("a > b : %d\n", res);  /*10>20은 거짓이므로 결괏값은 0*/

    res = (a >= b);
    printf("a >= b : %d\n", res);  /*10>=20은 거짓이므로 결괏값은 0*/

    res = (a < b);
    printf("a < b : %d\n", res);  /*10<20은 참이므로 결괏값은 1*/

    res = (a <= b);
    printf("a <= b : %d\n", res);  /*10<=20은 참이므로 결괏값은 1*/

    res = (a <= c);
    printf("a <= c : %d\n", res);  /*10<=10은 참이므로 결괏값은 1*/

    res = (a == b);
    printf("a == b : %d\n", res);  /*10==20은 거짓이므로 결괏값은 0*/

    res = (a != c);
    printf("a != c : %d\n", res);  /*10!=10은 거짓이므로 결괏값은 0*/

    return 0;
}