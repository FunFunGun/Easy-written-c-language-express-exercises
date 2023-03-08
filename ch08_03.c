#include <stdio.h>
#define PI 3.141592

double cal_area(double radius);

int main()
{
    double radius, area;
    
    printf("원의 반지름을 입력하시오:");
    scanf("%lf", &radius);
    
    area = cal_area(radius);
    printf("원의 면적은 %f입니다.", area);

    return 0;
}

double cal_area(double radius)
{
    double area;
    area = PI * radius * radius;
    
    return area;
}
