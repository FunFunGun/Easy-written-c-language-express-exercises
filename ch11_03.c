#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

void array_fill(int *A, int size);

int main()
{
    int array[SIZE] = {};
    
    array_fill(array, SIZE);
    
    for(int i=0; i<SIZE; i++)
        printf("%d ", array[i]);
        
    return 0;
}

void array_fill(int *A, int size)
{
    srand((unsigned)time(NULL));
    
    for(int i=0; i<size; i++)
        A[i] = rand()%100;
}
