#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 10

int array_equal(int a[], int b[], int size);
void array_printf(int a[], int b[], int size);

int main()
{
    int a[SIZE];
    int b[SIZE];
    int result = (array_equal(a, b, SIZE));
    
    array_printf(a, b, SIZE);
    
    if(result == 1)
        printf("\n2개의 배열은 같음");    
        
    if(result == 0)
        printf("\n2개의 배열은 다름");
        
    return 0;
}

int array_equal(int a[], int b[], int size)
{
    srand((unsigned)time(NULL));
    
    for(int i = 0; i < size; i++)
    {
        a[i] = rand()%10;
        b[i] = rand()%10;
        
        if(a[i] != b[i])
            return 0;
            
        else
            return 1;
    }
}

void array_printf(int a[], int b[], int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ", a[i]);

    printf("\n");
    
    for(int j = 0; j < size; j++)
        printf("%d ", b[j]);
}

