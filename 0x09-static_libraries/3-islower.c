#include "main.h"

/**
 * _islower - A function to check for any lower case character
 * @c: is the int that will be use for the argument of the function
 * Return: Always Success
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
else
	return (0);
}
