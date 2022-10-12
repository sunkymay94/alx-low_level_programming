#include <stdio.h>
#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always Success
 */

int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char m;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	m = *argv[2];

	if ((m == '/' || m == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);

	return (0);
}
