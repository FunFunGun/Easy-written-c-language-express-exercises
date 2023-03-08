#include <stdio.h>

int power(int base, int power_raised);

int main()
{
    int base, power_raised;

    printf("밀수: ");
    scanf("%d", &base);
    
    printf("지수: ");
    scanf("%d", &power_raised);
    
    printf("%d^%d = %d", base, power_raised, power(base, power_raised));
    
    return 0;
}

int power(int base, int power_raised)
{
    int result = 1;
    
    result = base * power(base, power_raised-1);
        
    return result;
}
