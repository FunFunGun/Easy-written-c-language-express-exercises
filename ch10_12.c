#include <stdio.h>
#define SCALAR 2

int scalar_mult(int a[][3], int scalar);
void transpose(int a[][3], int b[][3]);

int a[3][3] =
{
    1, 2, 3,
    4, 5, 6,
    7, 8, 9
};

int b[3][3];

int main()
{
    scalar_mult(a, SCALAR);
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        
        printf("\n");
    }
    
    printf("\n");
    transpose(a, b);
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            printf("%d ", b[i][j]);
            
        printf("\n");
    }
}

int scalar_mult(int a[][3], int scalar)
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            a[i][j] = scalar * a[i][j];
}

void transpose(int a[][3], int b[][3])
{
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            b[i][j] = a[j][i];
}
