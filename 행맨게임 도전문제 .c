#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define words 3
#define length 20


int check(char s[], char a[], char ch);


int main()
{
	srand(time(NULL));
	int randnum;
	char k[words][length] =
	{
		"my skrr",
		"amd srkkk",
		"fuckk skkkr"
	};
	char sol[100] = { 0 };
	char ans[100] = { 0 };
	char ch;
	randnum = rand() % 3;

	for (int i = 0; i < 100; i++)
	{
		sol[i] = k[randnum][i];
	}

	for (int i = 0; i < 100; i++)
	{
		if (sol[i] == ' ')
		{
			ans[i] = ' ';
		}
		else if (sol[i] != 0)
		{
			ans[i] = '_';
		}
	}

	int chance = 0;

	while (1)
	{
		printf("문자열을 입력하시오 : %s \n", ans);
		printf("글자를 추측하시오 : ");
		scanf(" %c", &ch);
		
		check(sol, ans,ch);
		chance++;
		if (check(sol,ans,ch) == 1)
			break;
		if (chance >=10)
			break;
	}
}

int check(char s[], char a[], char ch)
{
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (ch == s[i])
			a[i] = s[i];
	}
	if (strcmp(s, a) == 0)
		return 1;
	else
		return 0;
}