#include <stdio.h>
#define ROW 3
#define COL 5

int main()
{
    int arr[ROW][COL] =
    {
        12, 56, 32, 16, 98,
        99, 56, 34, 41, 3,
        65, 3, 87, 78, 21
    };
    
    for(int i = 0; i < ROW; i++)
    {
        int sum = 0;
        
        for(int j = 0; j < COL; j++)
            sum += arr[i][j];
        
        printf("%d행의 합계: %d\n", i, sum);
    }
    
    for(int j = 0; j < COL; j++)
    {
        int sum = 0;
        
        for(int i = 0; i < ROW; i++)
            sum += arr[i][j];
    
        printf("%d열의 합계: %d\n", j, sum);
    }
    
    return 0;
}
