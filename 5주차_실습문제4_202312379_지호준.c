#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char x;
	printf("문자를 입력하세요: ");
	scanf("%c", &x);

	if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
		printf("모음입니다.");
	else
		printf("모음이 아닙니다.");

	return 0;
}