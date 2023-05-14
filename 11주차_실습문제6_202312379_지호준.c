#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int num[100];
	int sum = 0;
	float aver = 1;
	for (int i = 0; i < 100; i++)
	{
		if (i % 10 == 0)
			printf("\n");

		int rand_num = rand() % 100 + 1;
		printf("num[%03d] = %d ", i, rand_num);
		sum += rand_num;

	}
	aver = sum / 100;
	printf("\n합은 %d입니다.\n평균은 %d입니다.", sum, aver);
}