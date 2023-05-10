#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// 별찍기 반복문인데 오른쪽부터 배열되는 거(for중첩문)
int main()

{	
	int n;
	printf("정수 n을 입력하시오 :");
	scanf("%d", &n);

	for (int a = 1; a <= n; a++)
	{	
		for (int b = 1; b <= (n - a); b++)
		{
			printf(" ");
			
		}
		for (int c = 1; c <= a; c++)
		{
			printf("*");
			
		}
		printf("\n");
		
	}

	return 0;
}