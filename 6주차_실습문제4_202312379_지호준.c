#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, sum = 0, k = 0;
	
	printf("정수 n 입력 : ");
	scanf("%d", &n);

	while (n > 0)
	{
		if (k == 0) {
			sum += (n * n);
			--n;
			++k;
		}
		else {
			sum += -(n * n);
			--n;
			--k;
		}
		}


	printf("sum = %d\n", sum);
}