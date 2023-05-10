#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{	
	char b;
	srand(time(NULL));

	int c=1, a = rand();
	a = (a % 26) + 97;

	printf("'a'~'z'사이의 문자를 추측 : ");
	scanf(" %c", &b);

	while (b != a)
	{
	
		if (b < a)
		{
			printf("LOW\n");
			printf("'a'~'z'사이의 문자를 추측 : ");
			scanf(" %c", &b);
		}
		else
		{
			printf("HIGH\n");
			printf("'a'~'z'사이의 문자를 추측 : ");
			scanf(" %c", &b);

		}
		c++;

	}
	
	printf("정답은 %c , 시도횟수 = %d", a, c);
}