#include <stdio.h>

int main()
{
    double x;
    double F;
    
    printf("x의 값을 입력하시오 :");
    scanf("%lf", &x);
    
    if( x<= 0)
    {
        F = x*x -9*x +2;
        printf("f(x)의 값은 %f", F);
    }
    
    else
    {
        F = 7 * x + 2;
        printf(":f(x)의 값은 %f", F);
    }
    
    return 0;
}

