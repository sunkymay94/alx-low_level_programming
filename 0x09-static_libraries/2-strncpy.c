#include "main.h"

/**
* _strncpy - a function that copies a string
* @dest: destination for data copied.
* @src: source for data to be copied
 * @n: amount of bytes from src
 * Return: the pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	{
		for (k = 0; k < n && src[k] != '\0'; k++)
			dest[k] = src[k];
		for ( ; k < n; k++)
			dest[k] = '\0';
	}
	return (dest);
}
