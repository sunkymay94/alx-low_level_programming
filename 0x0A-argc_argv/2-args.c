#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: always success
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
