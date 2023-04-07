#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, c;

	printf("a 성분의 함량을 입력(mg) : ");
	scanf("%d", &a);
	printf("\nb 성분의 함량을 입력(mg) : ");
	scanf("%d", &b);
	printf("\nc 성분의 함량을 입력(mg) : ");
	scanf("%d", &c);

	if (a >= 40 && b >= 350 && c >= 17)
		printf("\n생산을 허가함");
	else
		printf("\n허가를 보류함");

	return 0;
}