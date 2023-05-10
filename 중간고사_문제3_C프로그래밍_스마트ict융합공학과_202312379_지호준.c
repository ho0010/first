#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a,b;
	char ch1, ch2, c;

	do {
		printf("첫번째 대문자 입력 :");
		scanf("%c", &ch1);
		if (ch1 >= 'A' && ch1 <= 'Z')
		{
			printf("두번째 대문자 입력 :");
			scanf("%c", &ch2);

			if (ch2 >= 'A' && ch2 <= 'Z')
			{
				b = ch2 - ch1+1;
				for (a = 1; a <= b; a++)

				{
					if (ch1 % 2 == 1)
					{
						printf("%c", ch1);
						ch1++;
					}
					else
					{
						printf("%c", ch1 + 32);
						ch1++;

					}
				}

			}
				
				

		}

	} while (ch1 < 'A' || ch1 > 'Z');
	
	
}