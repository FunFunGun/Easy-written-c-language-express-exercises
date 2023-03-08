#include <stdio.h>

struct book
{
    int id;
    char title[100];
    char author[20];
}a;


int main()
{
    
    a.id = 1;
    strcpy(a.title, "바람과 함께 사라지다");
    strcpy(a.author, "마가렛 미첼");
    
    
    printf("{%d, %s, %s}", a.id, a.title, a.author);
    
    return 0;
}
