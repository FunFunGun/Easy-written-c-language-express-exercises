#include <stdio.h>

void get_int(int *px, int *py);

int main()
{
    int *x, *y;
    
    printf("2개의 정수를 입력하시오(예: 10 20): ");
    get_int(x, y);
    printf("\n");
    
    printf("정수의 합은 %d", (*x)+(*y));
    
    return 0;
}

void get_int(int *px, int *py)
{
    scanf("%d %d", px, py);
}
