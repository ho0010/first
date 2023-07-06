#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define row 3
#define col 3

void print(char arr[row][col]);

int main()
{
	char arr[row][col];
	int a,b;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}

	int count = 0;

	while (count <9)
	{
		print(arr);
		printf(" user (행 열)을 입력하시오 : \n");
		scanf("%d %d", &a, &b);
		
		if (arr[a][b] != ' ')
		{
			
			printf("이미 입력된 칸입니다. 다시 입력해주세요\n");
			continue;
		}
		else if (count % 2 == 0)
		{
			arr[a][b] = 'O';
			count++;
		}
		else
		{
			arr[a][b] = 'X';
			count++;
		}
		

	}
	print(arr);
	printf("게임이 종료되었습니다.\n");
}

void print(char arr[row][col])
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("| %c |", arr[i][j]);
		}
		printf("\n");
	}

}
