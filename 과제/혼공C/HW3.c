#include <stdio.h>

int main(void)
{
    int num1, num2;
    char ch;
    int result = 0;

    printf("사칙연산 입력(정수) : ");
    scanf("%d%c%d", &num1, &ch, &num2);

    if (ch == '+')
    {
        result = num1 + num2;
    }

    else if (ch == '-')
    {
        result = num1 - num2;
    }

    else if (ch == '*')
    {
        result = num1 * num2;
    }

    else if (ch == '/')
    {
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("num2에는 0이 입력될수 없습니다. 다시 입력하세요\n");
        }
    }

    printf("%d%c%d=%d\n", num1, ch, num2, result);

    return 0;
}