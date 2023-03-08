#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROW 10
#define COL 10
#define x1 0
#define y1 0
#define x2 10
#define y2 10

void player(int arr[ROW][COL]);
void monster(int arr[ROW][COL]);

int arr[ROW][COL];

int main()
{
    monster(arr[ROW][COL]); // 몬스터 소환
    
    arr[x1][y1] = 1; // 시작 지점
    arr[x2][y2] = 3; // 목표 지점
            
    for(int i = 0; ; i++)
    {    
        player(arr[ROW][COL]);
        
        for(int j = 0; j < ROW; j++)
        {
            for(int k = 0; k < COL; k++)
            {
                if(arr[ROW][COL] == 0)
                    printf(". ");
                    
                if(arr[ROW][COL] == 1)
                    printf("# ");
                    
                if(arr[ROW][COL] == 2)
                    printf("M ");
                
                if(arr[ROW][COL] == 3)
                    printf("G ");
            }
            
            printf("\n");
        }
    }
    
    return 0;
}

void player(int arr[ROW][COL])
{
    char ch;
    scanf("%c", &ch);
        
        switch(ch)
        {
            case 'w':
                    arr[ROW-1][COL] = arr[ROW][COL];
                    break;
            case 's':
                    arr[ROW+1][COL] = arr[ROW][COL];
                    break;
            case 'a':
                    arr[ROW][COL-1] = arr[ROW][COL];
                    break;
            case 'd':
                    arr[ROW][COL+1] = arr[ROW][COL];
                    break;
        }
}

void monster(int arr[ROW][COL])
{
    srand((unsigned)time(NULL));
    
    arr[rand()%10][rand()%10] = 2;
    arr[rand()%10][rand()%10] = 2;
}

