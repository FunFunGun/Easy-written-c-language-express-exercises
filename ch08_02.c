#include <stdio.h>
#include <stdlib.h>

void check_alpha(char);

int main()
{
    char ch;
    
    printf("문자를 입력하시오: ");
    ch = getchar();
    
    check_alpha(ch);
    
    return 0;
}

void check_alpha(char ch)
{
    if((ch>='a') && (ch<='z'))
        printf("%c는 알파벳 문자입니다.", ch);
    else
        printf("%c는 알파벳 문자가 아닙니다.", ch);
}
