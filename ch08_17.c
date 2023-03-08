#include <stdio.h>
#define e 0.000001

int f_equal(double am double b);
double f_abs(double x);
double f_min(double x, double y);

int main()
{
    double a,b;
    
    
    printf("실수를 입력하시오: ");
    scanf("%lf", &a);

    printf("실수를 입력하시오: ");
    scanf("%lf", &b);
    
    if(f_equal(a,b) == 1)
        printf("두 개의 실수는 서로 같음");
        
    else
        printf("두 개의 실수는 서로 다름");
        
    return 0;
}

double f_abs(double x)
{
    if(x < 0)
        return -x;
        
    else
        return x;
}

double f_min(double x, double y)
{
    if(f_abs(x) > f_abs(y))
        return f_abs(y);
        
    else
        return f_abs(x);
}

int f_equal(double a, double b)
{
    if(f_abs(a-b) / f_min(a,b) < e)
        return 1;
        
    else
        return 0;
}
