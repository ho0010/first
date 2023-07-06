#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

	char s[] = "manners maketh man";
	char seps[] = " ,\t\n";
	char* token;

	int main()
	{
		token = strtok(s, seps);
		while(token != '\0')
		{
			printf("ÅäÅ« : %s \n", token);

			token = strtok(NULL, seps);
		}
	}

