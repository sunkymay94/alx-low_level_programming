#include "main.h"

/**
* _strcat - function concatenate two srtings
* @dest: a pointer to a character
* @src: a pointer to a character
* Return: returns the value of dest
*/

char *_strcat(char *dest, char *src)
{
	int p;
	int q;

	p = 0;
	q = 0;

	while (dest[p] != '\0')
	{
		p++;
	}
	while (src[q] != '\0')
	{
		dest[p] = src[q];
		q++;
		p++;
	}

	dest[p] = '\0';
	return (dest);
}
