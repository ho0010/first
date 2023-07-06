#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 문자열에 텍스트와 정수변수들을 넣을 수 있다.
int main()
{
	char str[50];
	int x = 10, y = 20, result;

	result = x + y;

	sprintf(str, "정수 %d와 %d를 더하면 %d입니다.", x, y, result);

	printf("%s \n", str);

}