#include <stdio.h>

int main()
{
    int weight;
    int height;
    double standard_weight;
    
    printf("체중과 키를 입력하세요 :");
    scanf("%d %d", &weight, &height);
    
    standard_weight = (height - 100) * 0.9;
    
    if(weight > standard_weight)
        printf("과체중입니다.");
        
    else if(weight < standard_weight)
        printf("저체중입니다.");
        
    else
        printf("표준입니다.");
        
    return 0;
}


