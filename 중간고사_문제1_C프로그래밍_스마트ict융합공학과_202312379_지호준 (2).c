#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a;
	int b=0;

	do {
		printf("모음 입력 : ");
		scanf("%c", & a);
		if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
		{
			b++;
		}
		else;
	} while (b == 0);
	printf("%c는 모음입니다.\n",a);;
		
		return 0;
}