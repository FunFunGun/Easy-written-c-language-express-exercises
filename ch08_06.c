#include <stdio.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
    int n, ev, ab, si;
    
    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    
    ev = even(n);
    ab = absolute(n);
    si = sign(n);
    
    if(ev == 1)
        printf("even()의 결과 : 짝수 ");
    else if(ev == 0)
        printf("even()의 결과 : 홀수 ");
        
    printf("absolute()의 결과 : %d ", ab);
    
    if(si== -1)
        printf("sign()의 결과 : 음수 ");
    else if(si == 0)
        printf("sign()의 결과 : 0 ");
    else if(si == 1)
        printf("sign()의 결과 : 양수 ");
        
    return 0;
}

int even(int n)
{
    if(n & 2 == 0)
        return 1;
        
    else if(n % 2 == 1)
        return 0;
}

int absolute(int n)
{
    if(n > 0)
        return n;
    
    else if(n < 0)
        return -n;
}

int sign(int n)
{
    if(n < 0)
        return -1;
        
    else if(n > 0)
        return 1;
        
    else
        return 0;
}
