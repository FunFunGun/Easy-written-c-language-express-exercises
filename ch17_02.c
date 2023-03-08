#include <stdio.h>
#include <stdlib.h>

int main()
{
    char **A = NULL;
    
    if((A = malloc(n*sizeof(char *))) != NULL) //먼저 n개의 v포인터를 위한 공간을 할당
    {
        for(int i=0; i<n; i++)
            A[i] = (char *)malloc(100); // 100개의 문자를 저장할 수 있는 공간 할당
    }
    
    return 0;
}

