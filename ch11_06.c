#include <stdio.h>
#define SIZE 10

void array_copy(int *A, int *B, int size);

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int b[SIZE] = {}; 
    
    array_copy(a, b, SIZE);
    
    printf("A[] = ");
    
    for(int i=0; i<SIZE; i++)
        printf("%d ", a[i]);
        
    printf("\n");
    
    printf("B[] = ");
    
    for(int j=0; j<SIZE; j++)
        printf("%d ", b[j]);
    
    return 0;
}

void array_copy(int *A, int *B, int size)
{
    for(int i=0; i<size; i++)
    {
        *B = *A;
        
        *B++;
        *A++;
    }
}
