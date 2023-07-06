#include <stdio.h>
#include <ctype.h>

int count_word(char* s);

int main()
{
	int wc = count_word("manners maketh man");
	printf("단어의 개수 : %d \n", wc);

}

int count_word(char* s)
{
	int  wc = 0, waiting = 1;

	for (int i = 0; s[i]; i++)
	{
		if (isalpha(s[i]))
		{
			if (waiting)
			{ 
				wc++;
				waiting = 0;
			}

		}
		else
			waiting = 1;

	}
	return wc;
}