#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void get_dice_face();

int main()
{
    for(int i = 0; i < 100; i++)
    {
        get_dice_face();
        
        if(i == 100)
        { 
            printf("1->%d", one);
            printf("2->%d", two);
            printf("3->%d", three);
            printf("4->%d", four);
            printf("5->%d", five);
            printf("6->%d", six);
        }
    }
    
    return 0;
}

void get_dice_face()
{
    int n = rand()%6+1;
    static int one;
    static int two;
    static int three;
    static int four;
    static int five;
    static int six;
    
    if(n == 1)
        one++;
    
    else if(n == 2)
        two++;
        
    else if(n == 3)
        three++;
        
    else if(n == 4)
        four++;
        
    else if(n == 5)
        five++;
        
    else if(n == 6)
        six++;
}
