#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROW 10
#define COL 10

int arr[ROW][COL];

void disp_trap(int arr[ROW][COL]);

int main()
{
    disp_trap(arr[ROW][COL]);
    
    return 0;
}

void disp_trap(int arr[ROW][COL])
{
    srand((unsigned)time(NULL));
    
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            arr[i][j] = rand()%2;
    
            if(arr[i][j] == 0)
                printf(". ");
                
            if(arr[i][j] == 1)
                printf("# ");
        }
        
        printf("\n");
    }
}

