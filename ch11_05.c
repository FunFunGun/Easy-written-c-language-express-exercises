#include <stdio.h>
#define SIZE 10

void convert(double *grades, double *scores, int size);

int main()
{
    double Grades[] = {00.00, 00.50, 01.00, 01.50, 02.00, 02.50, 03.00, 03.50, 04.00, 04.30};
    double Scores[10] = {};
    
    convert(Grades, Scores, SIZE);
    
    for(int i=0; i<SIZE; i++)
    {
        printf("%f ", Grades[i]);
    }
    
    printf("\n");
    
    for(int j=0; j<SIZE; j++)
    {
        printf("%f ", Scores[j]);
    }
    
    return 0;
}

void convert(double *grades, double *scores, int size)
{
    for(int i=0; i<size; i++)
    {
        *scores = 100*(grades[i])/04.30;
    }
}
