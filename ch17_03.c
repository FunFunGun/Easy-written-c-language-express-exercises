#include <stdio.h>
#include <stdlib.h>

typedef struct address
{
    char name[10];
    char phone_num[100];
} ADDRESS;

int main()
{
    ADDRESS *addresses;
    
    int size;
    int i;
    
    printf("주소의 개수: ");
    scanf("%d", &size);
    getchar(); //엔터키 제거
    
    addresses = (ADDRESS *)malloc(sizeof(ADDRESS) * size);
    
    if(addresses = NULL) //오류 처리
    {
        printf("동적 메모리 할당 오류");
        exit(1);
    }
    
    for(i=0; i<size; i++)
    {
        printf("이름을 입력하시오:");
        gets_s(addresses[i].name, 10);
        
        printf("휴대폰 번호를 입력하시오:");
        gets_s(addresses[i].phone_num, 100);
        
        getchar();
    }
    
    printf("=============================\n");
    printf("이름              휴대폰 번호\n");
    printf("=============================\n");
    
    for(i=0; i<size; i++)
        printf("%s %s", addresses[i].name, addresses[i].phone_num);
    
    printf("\n===========================\n");
    
    free(addresses);
    
    return 0;
}
