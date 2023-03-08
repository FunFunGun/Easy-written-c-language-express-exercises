#include <stdio.h>

int main()
{
    char op;
    int a,b;
    
    do
    {
        printf("연산을 선택하시오: ");
        scanf("%c", &op);
        
        printf("두 수를 공백으로 분리하여 입력하시오: ");
        scanf("%d %d", a, b);
        
        if(op == 'A')
             printf("%d", a+b);
             
        else if(op == 'S')
             printf("%d", a-b);
             
        else if(op == 'M')
             printf("%d", a*b);
             
        else if(op == 'D')
             printf("%d", a/b);
             
        else if(op == 'Q')
             break;
             
        else
             printf("연산을 선택하시오: ");
    }while(1);
    
    return 0;
}

