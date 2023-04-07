#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{	
	char x;
	printf("소문자를 입력하시오: ");
	scanf("%c", &x);

	char y = (x >= 'a' && x <= 'z') ? x - 32 : x;

	printf("대문자는 %c입니다.", y);

	return 0;
}