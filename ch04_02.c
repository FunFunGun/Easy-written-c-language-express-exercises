#include <stdio.h>

int main()
{
    int data;
    
    printf("16진수 정수를 입력하시오. \n");
    scanf("%x", &data);
    
    printf("8진수로는 %#o 입니다. \n", data);
    printf("10진수로는 %d입니다. \n", data);
    printf("16진수로는 %#x 입니다. \n", data);
    
    return 0;
}