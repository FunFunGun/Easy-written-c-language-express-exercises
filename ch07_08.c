#include <stdio.h>

int main()
{
    int h = 0;
    
    while(h == -1)
    {
        printf("막대의 높이(종료 : -1): ");
        scanf("%d", &h);
        
        for(int i = 0; i < h; i++)
            printf("*");
    }
    
    return 0;
}

