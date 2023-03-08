#include <stdio.h>
#define PI = 3.14;

int main()
{
    double r;
    printf("구적 반지름을 입력하시오: ");
    scanf("%lf", &r);
    printf("표면적은 %f입니다. \n체적은 %f입니다.", 4*PI*r*r, (double)(4/3)*PI*r*r*r);
    
    return 0;
}
