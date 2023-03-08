#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

double m(int a[], int size);
double v(int a[], int size);

int main()
{
    int a[SIZE];
    
    for(int i = 0; i < SIZE; i++)
    {
        printf("데이터를 입력하시오: ");
        scanf("%d", &a[i]);
    }
    
    printf("평균값은 %f\n", m(a, SIZE));
    printf("표준편차값은 %f", v(a, SIZE));
    
    return 0;
}

double m(int a[], int size)
{
    double sum = 0;
    
    for(int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    
    return sum/size;
}

double v(int a[], int size)
{
    double result = 0;
    
    for(int i = 0; i < size; i++)
    {
        result += (a[i]-m(a,size)) * (a[i]-m(a,size)) ;
    }
    
    return result/size;
}
