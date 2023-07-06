#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define row 3
#define col 5


void search(char*p , char k);

int main()
{
	char arr[row][col] = { 0 };
	char k;
	int i, j;
	char* p;
	p = arr;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			*p = rand() % 26 + 'A';
			p++;
		}
	}

	p = arr;

	//배열 출력
	printf("생성된 배열 : \n");

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{	
			printf(" %c", *p);
			p++;
		}
		printf("\n");
	}

	p = arr;

	printf("KEY 값 입력 : \n");
	scanf(" %c", &k);
	search(arr, k);

}

void search(char* p, char k)
{
	int i, j;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (*p == k)
			{
				printf("탐색 인덱스 = (%d행, %d열) \n", i + 1, j + 1);
			}
			p++;
		}
	}

}