#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a, b,area;
	printf("밑변, 높이 입력 : ");
	scanf("%lf %lf",&a,&b);

	area = (1.0 / 2.0)* a * b;
	printf("삼각형의 면적 = %lf", area);
}
