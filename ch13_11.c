#include <stdio.h>
#include <string.h>

struct phone_book
{
    char name[10];
    char home_phone[10];
    char cellphone[10];
}

int main()
{
    struct phone_book p[3];
    char search[10];
    
    for(int i=0; i<3; i++)
    {
        printf("이름을 입력하시오: ");
        scanf("%s", &p[i].name);
        printf("집전화번호를 입력하시오: ");
        scanf("%s", &p[i].home_phone);
        printf("휴대폰번호를 입력하시오: ");
        scanf("%s", &p[i].cellphone);
    }
    
    printf("검색할 이름을 입력하시오: ");
    scanf("%s", &search);
    
    if(strcmp(*search, p[0].name)==0)
        printf("집전화번호: %s\n휴대폰번호: %s", p[0].home_phone, p[0].cellphone);
        
    if(strcmp(*search, p[1].name)==0)
        printf("집전화번호: %s\n휴대폰번호: %s", p[1].home_phone, p[1].cellphone);
        
    if(strcmp(*search, p[2].name)==0)
        printf("집전화번호: %s\n휴대폰번호: %s", p[2].home_phone, p[2].cellphone);
        
    return 0;
}
