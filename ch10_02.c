#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    int x[SIZE] = {};
    unsigned char minimum;
    unsigned char maximum;
        
    for(int i = 0; i < SIZE; i++)
    {
        x[i] = rand();
        
        if(i == 0)
        {   
            minimum = x[0];
            maximum = x[0];
        }
        
        if(x[0] > x[i])
            minimum = x[i];
            
        if(x[0] < x[i])
            maximum = x[i];    
    }
    
    printf("최대값은 %d\n", maximum);
    printf("최소값은 %d", minimum);
    
    return 0;
}
