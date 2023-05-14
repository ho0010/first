#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c ;
	printf("두 수를 입력(a > b) : ");
	scanf("%d%d", &a, &b);
	c = b;

	while (1)
	{
		if (a % c == 0 && b % c == 0)
		{
			printf("%d와 %d의 최대 공약수는 %d", a, b, c);
			break;
		}
		else c--;
	}
}
