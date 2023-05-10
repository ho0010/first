#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x;
	printf("16진수 입력 : ");
	scanf("%x", &x);

	printf("8진수 : %o\n",x);
	printf("10진수 : %d\n",x);
	printf("16진수 : 0X%x",x);

	return 0;
}//