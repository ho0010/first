#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int N,n,k,A=0 ;

	printf("정수 입력 : ");
	scanf("%d", &n);

	N = n;

	while (n > 0)
	{
		k = n % 10;
		n = n / 10;
		A = A * 10;
		A += k;
	}
	printf("%d 의 거꾸로 만든 수 = %d",N, A);
}