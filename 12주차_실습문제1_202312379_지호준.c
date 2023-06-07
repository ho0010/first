#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{	
	int A[3][4];
	int B[4][3];
	int C[3][3];

	int i, j, k;

	printf("3x4인 A행렬\n");

	for (i = 0; i < 3; i++)
	{
		printf("%d번행 입력:", i+1);

		for (j = 0; j < 4; j++)
		{
			scanf("%d", &A[i][j]);
		}

	}

	printf("4x3인 B행렬\n");

	for (i = 0; i < 4; i++)
	{
		printf("%d번행 입력:", i+1);

		for (j = 0; j < 3; j++)
		{
			scanf("%d", &B[i][j]);
		}

	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			C[i][j] = 0;
			for (k = 0; k < 4; k++) 
			{
				C[i][j] += A[i][k] * B[k][j];
			}
			

		}

	}

	printf("3x3인 행렬 C\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}