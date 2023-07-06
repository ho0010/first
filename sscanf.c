#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문자열을 쪼개서 문자열이나 정수변수에 넣을 수 있다.
int main()
{
	char str[] = "file 12 skr";
	char name[10];
	char name1[10];
	int num;

	sscanf(str, "%s %d %s", name, &num,name1);

	printf("name = %s \n", name);
	printf("number = %d \n", num);
	printf("name1 = %s \n", name1);
}