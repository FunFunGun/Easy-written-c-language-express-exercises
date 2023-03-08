#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROW 10
#define COL 10
#define x 5
#define y 5

void disp_bug(int tile[ROW][COL]);

int tile[ROW][COL]; //타일 0으로 초기화

int main()
{
    disp_bug(tile[ROW][COL]); //벌레 함수 호출
    
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            if(tile[ROW][COL] == 0)
                printf(".");
            
            if(tile[ROW][COL] == 1)
                printf("*");
        }
        
        printf("\n");      
    }
    
    return 0;
}

void disp_bug(int tile[ROW][COL]) //배열 수정하는 벌레 함수
{
    for(int i = 0; i < ROW; i++)    // 모든 타일 값 0으로 초기화
        for(int j = 0; j < COL; j++)
            tile[ROW][COL] = 0;
    
    tile[x][y] = 1; //임의의 타일에 1로 초기화 하여 벌레 소환
    
    srand((unsigned)time(NULL));
        
    int number = rand()%8;
        
    switch(number) // 벌레 이동
    {
        case '0':
                tile[x-1][y] = tile[x][y];
                break;
        case '1':
                tile[x-1][y+1] = tile[x][y];
                break;
        case '2':
                tile[x][y+1] = tile[x][y];
                break;
        case '3':
                tile[x+1][y+1] = tile[x][y];
                break;
        case '4':
                tile[x+1][y] = tile[x][y];
                break;
        case '5':
                tile[x+1][y-1] = tile[x][y];
                break;
        case '6':
                tile[x][y-1] = tile[x][y];
                break;
        case '7':
                tile[x-1][y-1] = tile[x][y];
                break;
    }
}
