#include <stdio.h>

int main()
{
    double a,b;
    
    printf("실수를 입력하시오: \n");
    scanf("%lf %lf", &a, &b);
    printf("%f %f %f %f", a + b, a - b, a * b, a / b);
    
    return 0;
}