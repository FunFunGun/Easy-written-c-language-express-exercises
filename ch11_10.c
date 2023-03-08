#include <stdio.h>

void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd);


int main()
{
    int X;
    int Y;
    int *LCM;
    int *GCD;
    
    printf("두개의 정수를 입력하시오: ");
    scanf("%d %d", &X, &Y);
    
    get_lcm_gcd(X, Y, LCM, GCD);
    
    printf("최소공배수는 %d입니다.\n", &LCM);
    printf("최대공약수는 %d입니다.\n", &GCD);
    
    return 0;
}

void get_lcm_gcd(int x, int y, int *p_lcm, int *p_gcd)
{
    int r;
    
    *p_lcm = (x*y)/(*p_gcd);
    
    while(y!=0)
    {
        r = x%y;
        x = y;
        y = r;
    }
    
    *p_gcd = x;
}


