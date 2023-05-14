#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void print_random();

int main()
{
	int a, b, n;
	printf("값의 범위 a,b(a<b) 입력: ");
	scanf("%d%d", &a, &b);
	printf("랜덤번호 갯수 : ");
	scanf("%d", &n);

	print_random(a,b,n);

}

void print_random(int a, int b, int n)
{
	srand(time(NULL));

	int range = abs(a - b) + 1;
	for (int i = 0; i < n; i++)
	{
		int rand_num = rand() % range + a;
		printf("%d ", rand_num);

	}
}

