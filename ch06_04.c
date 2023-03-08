#include <stdio.h>

int main()
{
    int com = (rand()%3+1);
    int user = 0;
    
    printf("선택하시오(1: 가위 2:바위 3:보)");
    scanf("%d", &user);
    
    if((com == 1))
    {
        if(user == 2)
            printf("사용자가 이겼음");
        
        else if(user == 3)
            printf("컴퓨터가 이겼음");
            
        else
            printf("비겼음");
    }
    
    else if((com == 2))
    {
        if(user == 3)
            printf("사용자가 이겼음");
        
        else if(user == 1)
            printf("컴퓨터가 이겼음");
            
        else
            printf("비겼음");
    }
    
    else if((com == 3))
    {
        if(user == 1)
            printf("사용자가 이겼음");
        
        else if(user == 2)
            printf("컴퓨터가 이겼음");
            
        else
            printf("비겼음");
    }
    
    return 0;
}


