#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{	
	srand(time(NULL));

	int num[100];
	int sum_1 = 0, sum_2 = 0;
	for (int i = 0; i < 100; i++)
	{	
		int rand_num = rand() % 100 + 1;

		if (i % 10 == 0)
			printf("\n");
		
			if (i % 2 == 0)
			{
				
				printf("num[%03d] = %d ", i, rand_num);
				sum_1 += rand_num;
			}

			else {
				printf("num[%03d] = %d ", i, rand_num);
				sum_2 += rand_num;
			}
	}
	printf("\n짝수 인덱스의 합은 %d입니다.\n홀수 인덱스의 합은 %d입니다.", sum_1, sum_2);
}