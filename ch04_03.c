#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    int tmp = 0;
    
    printf("x = %d y = %d", x, y);
    
    tmp = x;
    x = y;
    y = tmp;
    
    printf("x = %d y = %d", x, y);
    
    return 0;
}