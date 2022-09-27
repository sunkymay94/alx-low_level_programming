#include "main.h"

/**
* _memset - a function fills the first n bytes of the memory area
*          pointed to by @s with the constant byte @b.
* @s:  pointer to the byte
* @b:  the constant byte to be filled into memory
* @n: The number of bytes to be filled.
* description_memset: over there
* Return: a pointer to memory area @s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mayor;
	unsigned char *veev = s, value = b;

	for (mayor = 0; mayor < n; mayor++)
		veev[mayor] = value;

return (veev);
}
