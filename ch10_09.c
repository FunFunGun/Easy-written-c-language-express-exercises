#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROW 5
#define COL 3

int arr[ROW][COL] = 
{
    30, 10, 11,
    40, 90, 32,
    70, 65, 56,
    70, 43, 32,
    80, 10, 89
};

int main()
{
    srand((unsigned)time(NULL));
    
    int minimum;
    int maximum;
    
    for(int i = 0; i < ROW; i++)
        for(int j = 0; j < COL; j++)
            arr[i][j] = rand()%100+1;
            
    for(int j = 0; j < COL; j++)
    {   
        minimum = arr[0][j];
        maximum = arr[0][j];
        
        for(int i = 0; i < ROW; i++)
        {
            if(arr[i][j] < minimum)
                minimum = arr[i][j];
                
            if(arr[i][j] > maximum)
                maximum = arr[i][j];
        }
        
        printf("시험 #%d의 최대점수=%d\n", j, maximum);
        printf("시험 #%d의 최저점수=%d\n", j, minimum);
    }
    

    
    return 0;
}
