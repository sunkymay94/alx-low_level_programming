#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers followed by a new line
 * @argc: argument that counts argument input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: always success
 */

int main(int argc, char *argv[])
{
	int dig_1, dig_2, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		dig_1 = atoi(argv[1]);
		dig_2 = atoi(argv[2]);
		mul = dig_1 * dig_2;

		printf("%d\n", mul);
	}
	return (0);
}
