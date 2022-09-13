#include "main.h"

/**
 * print_sign - A function to check for a sign in a number
 * @n: is the int that will be used for the argument of the function
 * Return: Always Succes
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
{
	_putchar('-');
	return (-1);
}
	else
	{
	_putchar('0');
	return (0);
	}
}
