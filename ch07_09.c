#include <stdio.h>

int main()
{
    int i;
    int sum = 0;
    
    for(i = 1; ; i++)
    {
        sum += i;
        
        if(sum > 10000)
        {
            sum -= i;
            i--;
            break;
        }
    }
    
    printf("1부터 %d까지의 합이 %d입니다.", i, sum);
    
    return 0;
}

