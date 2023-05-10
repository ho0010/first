#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 소문자 대문자 소문자 = 대문자 + 32
int main()
{	
	char a;
	printf("대문자를 입력하시오 :");
	scanf("%c", &a);

	if (a  >= 'A' && a <= 'Z')

	printf("소문자는 %c입니다.\n", a+32);
		
	else
	{
		printf("대문자를 입력하세요.");
	}
}