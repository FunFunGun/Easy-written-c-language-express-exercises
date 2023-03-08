#include <stdio.h>
int sum(int n);

int main()
{
	int number, result;

	printf("정수를 입력하시오: ");
	scanf("%d", &number);

	result = sum(number);

	printf("1부터 %d까지의 합=%d\n", number, result);
}

int sum(int num)
{
	if (num != 0)
		return num + sum(num - 1); 
	else
		return num;
}

