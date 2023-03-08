#include <stdio.h>

int round(double f);

int main()
{
    double f;
    int banolim;
    
    
    printf("실수를 입력하시오: ");
    scanf("%lf", &f);
    
    banolim = round(f);
    
    printf("반올림한 값은 %d입니다.", banolim);

    return 0;
}

int round(double f)
{
    int banolim;
    
    banolim = (int)(f+0.5);
    
    return banolim;
}
