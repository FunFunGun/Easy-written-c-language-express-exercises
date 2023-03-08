#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand();

int main()
{
    int n;
    
    for(int i = 0; i < 5; i++)
    {
        n = b_rand();
        printf("%d", n);
    }
    
    return 0;
}

int b_rand()
{
    srand((unsigned)time(NULL));
        
    return rand() % 2;
}

