#include <stdio.h>
#define PI 3.14

struct point
{
    int x, y;
};

struct circle // typedef struct circle
{
    struct point center; // 원의 중심
    double radius; // 원의 반지름
}; // }CIRCLE;

double area(struct circle c) // double area(CIRCLE c)
{
    return c.radius * c.radius * PI;
}

double perimeter(struct circle c) // double perineter(CIRCLE c)
{
    return 2 * PI * c.radius;
}

int main()
{
    struct point p;
    struct circle c; // CIRCLE c;
    
    p.x = 0;
    p.y = 0;
    
    c.radius = 10;
    
    printf("원의 중심점 : %d %d\n", p.x, p.y);
    printf("원의 반지름 : %d\n", (int)c.radius);
    printf("원의 면적=%f, 원의 둘레=%f", area(c), perimeter(c));
    
    return 0;
}

