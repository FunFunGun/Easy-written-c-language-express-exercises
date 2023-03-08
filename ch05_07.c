#include <stdio.h>
int main(void)
{
	int value, count;

	printf("정수를 입력하시오:");
	scanf("%d", &value);
	printf("2를 곱하고 싶은 횟수:");
	scanf("%d", &count);
	printf("%d<<%d의 값: %d \n", value, count, value<<count);
	return 0;
}
