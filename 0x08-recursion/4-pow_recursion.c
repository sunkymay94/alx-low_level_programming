#include "main.h"

/**
* _pow_recursion - Returns the value of x raised to the power of y.
* @x: The number to be raised.
* @y: The power of x
* Return: The value of x raised to the power of y.
*/

int _pow_recursion(int x, int y)
{
	int z = x;

	{
		if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);
	}

		{
			z *= _pow_recursion(x, y - 1);
		}
	return (z);
}
