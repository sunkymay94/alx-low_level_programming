#include <stdio.h>

/**
 * main - prints the name of the running program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 * Return: always success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
