#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds numbers
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
	int b = 0, m, n;

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n]; n++)
		{
			if (isdigit(argv[m][n]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (m = 1; m < argc; m++)
	{
		b += atoi(argv[m]);
	}
	printf("%d\n", b);

	return (0);
}
