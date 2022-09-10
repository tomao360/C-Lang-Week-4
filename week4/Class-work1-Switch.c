#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int main_2()
{
	int a = 10;
	int b = 12;

	char userResponse = NULL;
	while (userResponse != 'E')
	{
		printf("Please enter one of the following choices:\n'+' for addition\n'-' for subtraction\n'*' for multipule\n'/' for divide\n'E'-to exit the program\n");
		userResponse = getch();

		switch (userResponse)
		{
		case '+':
			printf("%d + %d = %d\n", a, b, a+b);
			break;
		case '-':
			printf("%d - %d = %d\n", a, b, a-b);
			break;
		case '*':
			printf("%d * %d = %d\n", a, b, a*b);
			break;
		case '/':
			printf("%d / %d = %d\n", a, b, a/b);
			break;
		case 'E':
			printf("Thank you for using our program\n");
			break;

		default:
			printf("Wrong selection, please try again\n");
			break;
		}
	}

	return 0;
}