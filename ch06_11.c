#include <stdio.h>

int main()
{
    char c;
    
    printf("문자를 입력하시오 :");
    scanf("%c", &c);
    
    switch(c)
    {
        case 'T':
        case 't':
                printf("Triangle");
                break;
                
        case 'R':
        case 'r':
                printf("Circle");
                break;
                
        case 'C':
        case 'c':
                printf("Unknown");
                break;
    }
    
    return 0;
}

