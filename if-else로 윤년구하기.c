#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()

{
	int num;

	printf("연도를 입력하시오: ");
	scanf("%d", &num);

	if ((num % 4) == 0 && (num % 100) != 0 || (num % 400) == 0)
		printf("윤년입니다.");
	else
		printf("윤년이 아닙니다");



	return 0;
}