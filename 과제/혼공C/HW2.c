#include <stdio.h>

int main(void)
{
    double weight;
    double height;
    double bmi = 0;

    printf("체중(kg)과 키(cm)를 입력하시오 : ");
    scanf("%lf %lf", &weight, &height);

    height = height * 0.01;
    bmi = weight / (height * height);

    if ((bmi >= 20.0) && (bmi < 25.0)) {
        printf("bmi는 %.1lf입니다. 표준입니다.\n", bmi);
    }
    else {
        printf("bmi는 %.1lf입니다. 체중관리가 필요합니다.\n", bmi);
    }

    return 0;
}