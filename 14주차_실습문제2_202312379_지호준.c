#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[30];
	int count = 0;
	printf("입력 문자열 : ");
	
	gets(arr, 30);

	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
			count++;
	}

	printf("모음의 개수 : %d", count);

}