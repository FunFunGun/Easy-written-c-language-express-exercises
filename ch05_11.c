#include <stdio.h>
#define PI = 3.14;

int main()
{
    double a, b, l, r;
    
    printf("거리를 입력하시오: ");
    scanf("%lf", &a);
    
    printf("각도를 입력하시오: ");
    scanf("%lf", &b);
    
    l = (double)(a*360)/b;
    r = l/(2*PI);
    
    printf("지구의 반지름은 %f", r);
    
    return 0;
}
