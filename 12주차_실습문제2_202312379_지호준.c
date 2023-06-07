#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int clock[13];

	clock[1] = (rand() % 100 + 1);

	int sum = 0;
	double average = 1;

	for (int i = 2; i < 13; i++)
	{	
		while (1)
		{
			clock[i] = (rand() % 100 + 1);
			if (clock[i] % i != 0)
				break;
		}
	}

	for (int i = 1; i < 13; i++)
	{
		printf("clock[%02d] = %d ",i, clock[i]);
		if (i == 6)
			printf("\n");
	}

	for (int i = 1; i < 7; i++)
	{	
		sum += clock[i] * clock[i + 6];
	}
	average = sum / 6.0;
	printf("\n");
	printf("ÇÕ°è : %d , Æò±Õ : %lf ", sum, average);

}