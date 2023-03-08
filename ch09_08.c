#include <stdio.h>

int get_digit();

int main()
{
    int x;
    
    printf("정수를 입력하시오: ");
    scanf("%d", &x);
    
    printf("자리수의 개수: %d", get_digit(x));
    
    return 0;
}

int get_digit()
{
    static int x;
    int count;
    
    get_digit(x-1)
    
    return count;
}
