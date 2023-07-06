#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 15
char arr[size] = { 0 };

void range(char* p);

int main()
{
	int i, j;
	srand(time(NULL));

	char* p;
	p = arr;

	for (i = 0; i < size; i++)
	{
		*p = rand() % 26 + 'A';
		p++;
	}

	p = arr;

	printf("생성된 배열 : \n");

	for (i = 0; i < size; i++)
	{
		printf(" %c ", *p);
		p++;
	}

	p = arr;

	range(p);



	printf("\n");
	printf("정렬된 배열 : \n");

	for (i = 0; i < size; i++)
	{
		printf(" %c ", *p);
		p++;
	}
}

void range(char* p)
{
	char temp, least;
	int i, j;

	for (i = 0; i < size - 1; i++)
	{
		least = i;
		for (j = i + 1; j < size; j++)
		{
			if (*(p + least) > *(p + j))
			{
				temp = *(p + j);
				*(p + j) = *(p + least);
				*(p + least) = temp;
			}

		}
	}

}