#include <stdio.h>

double square(double x);

int main()
{
    double x, result;
    printf("정수를 입력하시오 :");
    scanf("%lf", &x);
    
    result = square(x);
    printf("주어진 실수 %f의 제곱은 %f입니다.", x, result);
    
    return 0;
}

double square(double x)
{
    return x*x;
}
