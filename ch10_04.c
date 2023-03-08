#include <stdio.h>
#define SIZE 10

void array_copy(int a[], int b[], int size);

int main()
{
    int a[SIZE];
    int b[SIZE];
    
    for(int i = 0; i < SIZE; i++)
        scanf("%d ", &a[i]);
        
    array_copy(a, b, SIZE);
    
    for(int i = 0; i < SIZE; i++)
        printf("%d ",b[i]);
        
    return 0;
}

void array_copy(int a[], int b[], int size)
{
    for(int i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
}
