#include <stdio.h>
#define SIZE 10

void array_add(int *A, int *B, int *C, int size);

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int b[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int c[SIZE] = {};
    
    array_add(a, b, c, SIZE);
    
    printf("A[] = ");
    
    for(int i=0; i<SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\n");
    printf("B[] = ");
    
    for(int j=0; j<SIZE; j++)
    {
        printf("%d ", b[j]);
    }
    
    printf("\n");
    printf("C[] = ");
    
    for(int k=0; k<SIZE; k++)
    {
        printf("%d ", c[k]);
    }
    
    return 0;
}

void array_add(int *A, int *B, int *C, int size)
{
    for(int i=0; i<size; i++)
    {
        C[i] = A[i]+B[i];
    }
}
