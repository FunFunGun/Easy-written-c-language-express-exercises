#include <stdio.h>
#define PW = 1234

int check();

int n;

int main()
{
    for(int i = 0; ; i++)
    {
        check();
    
        if((i >= 3) && (check() == 1))
        {   
            printf("로그인 시도 횟수 초과");   
            break;
        }
    }
}

int check()
{
    printf("비밀번호: ");
    scanf("%d", &n);
    
    static int try;
    
    try++;
    
    if(n == PW)
        return 0;
        
    else
        return 1;
}
