#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char x;
	printf("소문자를 입력하시오: ");
	scanf("%c", &x);

	if (x >= 'a' && x <= 'z')
		x = x - 32;

	printf("대문자는 %c입니다.", x);

	return 0;
}