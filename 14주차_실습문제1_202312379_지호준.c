#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main()
{
	char arr[30];
	char arr_1[30];

	printf("입력 문자열 : ");
	gets(arr, 30);

	int i;

	for ( i = 0; arr[i] != '\0'; i++)
	{
		if (islower(arr[i]))
			arr_1[i] = toupper(arr[i]);
		else if (isupper(arr[i]))
			arr_1[i] = tolower(arr[i]);
		else
			arr_1[i] = arr[i];
	}

	arr_1[i] = '\0';
	printf("출력 문자열 : ");
	puts(arr_1);

}