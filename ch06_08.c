#include <stdio.h>

int main()
{
    int time;
    int age;
    
    printf("현재 시각과 나이를 입력하시오(시간, 나이):");
    scanf("%d %d", &time, &age);
    
    if((time > 0) && (time < 17))
    {
        if((age>12) && (age < 65))
            printf("요금은 34,000원입니다.");
        
        else if((age >= 3) && (age <= 12) && (age >= 65))
            printf("요금은 25,000원입니다.");
            
        else
            printf("FREE");     //사용자 임의 추가
    }
    
    else
        printf("요금은 10,0000원입니다.");
        
    return 0;
}

