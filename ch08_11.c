#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define RAND_MAX 32767;

double f_rand();

int main()
{
    double f;
    
    for(int i = 0; i < 5; i++)
    {
        f = f_rand();
        printf("%f", &f);
    }
  
    return 0;
}

double f_rand()
{
    srand((unsigned)time(NULL));    
    
    return rand() / (double)RAND_MAX;
}
