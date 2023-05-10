#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a,b,c,d;
	printf("별의 개수 입력 : ");
	scanf("%d", &a);

	for (b = 1; b <= a; b++)
	{	
		for (d = 2; d <= b ; d++)
			printf(" ");

		for (c = 1; c <= a-d+2; c++)
			printf("*");

		printf("\n");
	}
}