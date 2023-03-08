#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void array_print(int *A, int size);

int main()
{
    int array[SIZE] = {};
    array_print(array, SIZE);
    
    return 0;
}

void array_print(int *A, int size)
{
    srand((unsigned)time(NULL));
    
    printf("A[] = { ");
    
    for(int i=0; i<size; i++)
    {
        *A = rand()%10;
        printf("%d ", *A);
        
        *A++;
    }
    
    printf("}\n");
}
