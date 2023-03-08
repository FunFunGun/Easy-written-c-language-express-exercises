#include <stdio.h>

int main()
{
    double w = 0;
    double h = 0;
    double d = 0;
    double v = 0;
    
    v = w * h * d;
    
    printf("상자의 가로세로 높이를 한번에 입력 :");
    scanf("%lf %lf %lf", &w, &h, &d);
    printf("상자의 부피는 %f입니다.", v);
    
    return 0;
}