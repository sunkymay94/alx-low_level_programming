#include "main.h"

/**
* _memcpy - function copies n bytes from memory area src to dest
* @dest: destination memory area
* @src: source memory area
* @n: max bytes to be used
* Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; n > 0 ; m++, n--)
	{
		dest[m] = src[m];
	}

	return (dest);
}
