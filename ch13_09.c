#include <stdio.h>

struct food
{
    char name[100];
    int calories;
};

int main()
{
    struct food food_array[3];
    
    scanf("쳐먹은 것 : %s", (food_array[0].name));
    scanf("쳐먹은 것 : %s\n 칼로리 : %d\n", &(food_array[1].name), &(food_array[1].calories));
    scanf("쳐먹은 것 : %s\n 칼로리 : %d\n", &(food_array[2].name), &(food_array[2].calories));
    
    printf("총 칼로리 = %d", food_array[0].calories + food_array[1].calories + food_array[2].calories);
    
    return 0;
}
