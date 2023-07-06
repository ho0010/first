#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 10

void print_seats(int seats[]);

int main()
{
	int seats[size] = { 0 };
	char ans1;
	int ans2;
	int ans3;

	while (1)
	{
		printf("좌석을 예약하시겠습니까? (Y or N)\n");
		scanf(" %c", &ans1);

		if (ans1 == 'N')
			break;

		print_seats(seats);

		printf("몇자리를 예약하시겠습니까? (1 or 2)\n");
		scanf("%d", &ans3);

		if (ans3 == 2)
		{
			printf("몇번째 좌석을 예약하시겠습니까? \n");
			scanf("%d", &ans2);

			if (seats[ans2 - 1] == 0)
			{
				seats[ans2 - 1] = 1;
				printf("예약완료되었습니다.\n");
			}
			else
				printf("이미 예약된 좌석입니다.\n");
			ans3 = 1;
		}
		

			printf("몇번째 좌석을 예약하시겠습니까? \n");
			scanf("%d", &ans2);

			if (seats[ans2 - 1] == 0)
			{
				seats[ans2 - 1] = 1;
				printf("예약완료되었습니다.\n");
			}
			else
				printf("이미 예약된 좌석입니다.\n");
			

	}

}

void print_seats(int seats[])
{
		printf("--------------------\n");

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", seats[i]);
	}
		printf("\n--------------------\n");
}
