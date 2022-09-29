#include "main.h"

/**
* _puts_recursion - Will print a string, followed by a new line.
* @s: The string to be printed
* Return: Always success
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
