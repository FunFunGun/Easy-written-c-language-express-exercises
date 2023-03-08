#include <stdio.h>
#define SIZE 10

int array_sum(int *A, int size);

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    
    for(int i=0; i<SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\n");
    printf("월급의 합 = %d", array_sum(a, SIZE));
    
    return 0;
}

int array_sum(int *A, int size)
{
    int sum = 0;
    
    for(int i=0; i<size; i++)
    {
        sum += *A++;
    }
    
    return sum;
}
