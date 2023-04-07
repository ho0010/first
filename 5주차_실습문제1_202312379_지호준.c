#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int a, v, s, h;

	printf("한변의 길이 a를 입력하시오: ");
	scanf("%d", &a);

	v = (sqrt(2) / 12) * a * a * a;
	s = sqrt(3) * a * a;
	h = (sqrt(6) / 3) * a;

	printf("부피 v = %d \n", v);
	printf("겉넓이 s = %d \n", s);
	printf("높이 h = %d \n", h);

	return 0;
}