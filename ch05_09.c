#include <stdio.h>

int main()
{
    double BC, AC, AE, DE;
    
    printf("지팡이의 높이를 입력하시오: ");
    scanf("%lf", &BC);
    
    printf("지팡이 그림자의 길이를 입력하시오: ");
    scanf("%lf", &AC);
    
    printf("피라미드까지의 거리를 입력하시오: ");
    scanf("%lf", &AE);
    
    DE = (AE*BC) / AC;
    printf("피라미드까지의 높이는 %f입니다.", DE);
    
    return 0;
}
