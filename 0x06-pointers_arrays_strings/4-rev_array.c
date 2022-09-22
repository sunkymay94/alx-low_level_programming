#include "main.h"

/**
* reverse_array - reverses the content of an array of intg
* @a: array
* @n: number of elements in the array
* Return: Always Success
*/

void reverse_array(int *a, int n)
{
	int m, p, temp;

	for (m = 0; m < n - 1; m++)
	{
		for (p = m + 1; p > 0; p--)
		{
			temp = *(a + p);
			*(a + p) = *(a + (p - 1));
			*(a + (p - 1)) = temp;
		}
	}
}
