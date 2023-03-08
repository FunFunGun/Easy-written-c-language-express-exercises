#include <stdio.h>

struct account
{
    int number;
    char name[20];
    int balance;
}a;

int main()
{
    a.number = 1;
    strcpy(a.name, "홍길동");
    a.balance = 100000;
    
    printf("{%d, %s, %d}", a.number, a.name, a.balance);
    
    return 0;
}
