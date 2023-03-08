#include <stdio.h>

double get_double();
double add();
double sub();
double mul();
double div();
double dong();
void disp_menu();

int main()
{
    disp_menu();
    
    double f, g, result;
    int n;
    
    do
    {
        printf("원하는 메뉴를 선택허시오(1-5): ");
        scanf("%d", &n);
        
        if(n == 1)
        {
            result = add();
            printf("연산결과 : %f", result);
        }
        
        else if(n == 2)
        {
            result = sub();
            printf("연산결과 : %f", result);
        }
        
        else if(n == 3)
        {
            result = mul();
            printf("연산결과 : %f", result);
        }
        
        else if(n == 4)
        {
            result = div();
            printf("연산결과 : %f", result);
        }
        
        else if(n == 5)
        {
            result = dong();
            printf("연산결과 : %f", result);
        }
        
        printf("계속하려면 y를 누리시오:");
        char ch;
        scanf("%c", &ch);
        
        if(ch == 'y')
            continue;
            
        else if(ch == 'n')
            break;
            
    }while(1);
    
    return 0;
}

double get_double()
{
    double n1, n2, n;
    printf("숫자를 입력하시오 :");
    scanf("%lf", &n);
    
    return n;
}

void disp_menu()
{
    for(int i = 0; i < 32; i++)
        printf("=");
        
    printf("MENU"); 
    
    for(int i = 0; i < 32; i++)
        printf("=");
    
    printf("\n");    
    printf("1.덧셈\n");
    printf("2.뺄셈\n");
    printf("3.곱\n");
    printf("4.나눗셈\n");
    printf("5.나머지\n");
}

double add()
{
    double f, g;
    
    f = get_double();
    g = get_double();
    
    return f + g;
}

double sub()
{
    double f, g;
    
    f = get_double();
    g = get_double();
    
    return f - g;
}

double mul()
{
    double f, g;
    
    f = get_double();
    g = get_double();
    
    return f * g;
}

double div()
{
    double f, g;
    
    f = get_double();
    g = get_double();
    
    return f / g;
}

double dong()
{
    double f, g;
    
    f = get_double();
    g = get_double();
    
    return (int)f % (int)g;
}
