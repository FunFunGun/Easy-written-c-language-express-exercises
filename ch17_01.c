#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int a;
    int b;
    
    printf("정수의 개수: ");
    scanf("%d", &size);
    
    int *p = (int *)malloc(sizeof(int)*size);
    
    printf("양의 정수를 입력하시오: ");
    scanf("%d", &p[0]);
    printf("양의 정수를 입력하시오: ");
    scanf("%d", &p[1]);
    
    printf("합은 %d입니다.", p[0] + p[1]);
    
    return 0;
}
