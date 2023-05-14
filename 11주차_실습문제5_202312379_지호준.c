#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch[26];
	int k=65;
	for (int i = 0; i < 26; i++)
	{	
		if (i % 2 == 0)
		{
			ch[i] = k;
			printf("ch[%02d]=%c \n", i, ch[i]);
			k += 33;
		}
		else
		{
			ch[i] = k;
			printf("ch[%02d]=%c \n", i, ch[i]);
			k -= 31;

		}
	}

}