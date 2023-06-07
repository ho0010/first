#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	char arr[3][5];
	srand(time(NULL));
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = (rand() % 26) + 65;
		}

	}

	printf("积己等 硅凯 : \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}

	printf("硅凯狼 林家 :\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 0 && j == 0)
				printf(" ");
		printf("ch[%d][%d] = %c , addr = %p\n ",i,j,arr[i][j], arr[i][j]);
		}
	}

}