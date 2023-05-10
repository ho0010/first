#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//while 문
int main()
{
	int num,n;
	int sum_1 = 0, sum_2 = 0;

	printf("양의 정수 n을 입력하시오 : ");
	scanf("%d", &num);
	n = num;
	while (num>0)
	{	
		if (num % 2 == 0)
		{
			sum_1 += num;
				num = num - 1;
		}
		else
		{
			sum_2 += num;
			num = num - 1;
		}
	}

	printf("1과 %d 사이의 홀수의 합은 %d입니다.\n", n, sum_2);
	printf("1과 %d 사이의 짝수의 합은 %d입니다.", n, sum_1);

}
//do~while문
/*int main()
{
	int n,num,sum_1=0,sum_2=0;

	printf("양의 정수 n을 입력하시오 : ");
	scanf("%d", &num);
	n = num;

	do {
		if (num % 2 == 0)
		{	sum_1 += num;
		num = num - 1;
		}
		else
		{
			sum_2 += num;
			num = num - 1;
		}
		
	} while (num > 0);

	printf("1과 %d 사이의 홀수의 합은 %d입니다.\n", n, sum_2);
	printf("1과 %d 사이의 짝수의 합은 %d입니다.", n, sum_1);
}*/
//for문
/*int main()
{
	int n, sum_1 = 0, sum_2 = 0;

	printf("양의 정수 n을 입력하시오 : ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			sum_1 += i;
		}
		else {
			sum_2 += i;
		}
	}
	printf("1과 %d 사이의 홀수의 합은 %d입니다.\n", n, sum_2);
	printf("1과 %d 사이의 짝수의 합은 %d입니다.", n, sum_1);
}*/