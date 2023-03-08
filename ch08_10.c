#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int b_rand();

int main()
{
    int n;
    char ch;
    
    do
    {
        printf("앞면 또는 뒷면(1 또는 0) :");
        scanf("%d", &n);
        
        if(b_rand() == n)
            printf("맞았습니다.");
        
        else
            printf("틀렸습니다.");
            
        printf("계속하시겠습니까? (y또는 n) :");
        ch = getchar();
        
        if(ch == 'y')
            continue;
            
        else if(ch == 'n')
            break;
    }while(1);
    
    return 0;
}

int b_rand()
{
    srand((unsigned)time(NULL));
    return rand() % 2;
}

