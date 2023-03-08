#include<stdio.h>
int main(void)
{
	double kenergy, mass, speed;

	printf("질량(kg): ");
	scanf("%lf", &mass);
	printf("속도(m/s): ");
	scanf("%lf", &speed);

	kenergy = (1.0 / 2.0)* mass*speed*speed;
	printf("운동에너지(J): %lf\n", kenergy);
	return 0;
}