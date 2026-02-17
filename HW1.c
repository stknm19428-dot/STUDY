#include <stdio.h>

int main(void)
{
    double light_rate = 3e5;
    double distance = 40e12;
    double light_year = light_rate * 365.0 * 24.0 * 60.0 * 60.0;
    double vo_rate = 6e4 * 365.0 * 24.0 * 60.0 * 60.0;
    double time_ly = distance / vo_rate;

    printf("보이저로 가려면 얼마의 시간이 걸리는가?[광년] : %.1lf[광년]\n", time_ly);

    return 0;
}