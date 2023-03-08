#include <stdio.h>

int main()
{
    int i = 0;
    printf("카운터의 초기값을 입력하시오 :");
    scanf("%d", &i);
    
    for(i; i>0; i--)
        printf("%d", i);
        printf("\a");

    return 0;
}

