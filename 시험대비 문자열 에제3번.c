#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{

	char arr[30];
	int len;
	char temp;

	printf("문자열 입력 : ");
	gets(arr, 30);
	len = strlen(arr);

	if (len % 2 == 1 && len != 1)
		len++;

	for (int i = 0; i < len / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}
	printf("문자열 역순 출력 : ");
	puts(arr);

}