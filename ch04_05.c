#include <stdio.h>
#define SQMETER_PER_PYEONG 3.3058

int main()
{
    double pyeong = 0;
    double sqmeter = 0;
    
    sqmeter = pyeong * SQMETER_PER_PYEONG;
    
    printf("평을 입력하세요 :");
    scanf("%lf", &pyeong);
    printf("%f 평방미터입니다.", sqmeter);
    
    return 0;
}