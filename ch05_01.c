#include <stdio.h>

int main()
{
    int a,b;
    
    printf("2개의 정수를 입력하시오 :\n");
    scanf("%d %d", &a, &b);
    
    printf("몫 : %d 나머지 : %d", a/b, a%b);
    
    return 0;
}