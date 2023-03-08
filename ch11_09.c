#include <stdio.h>
#define SIZE 5
#define VALUE 200

int search(int *A, int size, int search_value);


int main()
{
    int a[] = {100, 200, 300, 400, 500};
    
    printf("월급이 200만원인 사람의 인덱스 = %d", search(a, SIZE, VALUE));
    
    return 0;
}

int search(int *A, int size, int search_value)
{
    int i;
    
    for(i=0; i<size; i++)
    {
        if(A[i] == search_value)
            break;
    }
    
    return i;
}
