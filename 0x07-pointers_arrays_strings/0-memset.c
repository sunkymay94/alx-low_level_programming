#include "main.h"

/**
* _memset - a function fills the first n bytes of the memory area
*          pointed to by @s with the constant byte @c.
* @s:  pointer to the byte
* @c:  the constant byte to be filled into memory
* @n: The number of bytes to be filled.
* description_memset: over there
* Return: a pointer to memory area @s
*/

void *_memset(void *s, int c, size_t n)
{
	unsigned int mayor;
	unsigned char *veev = s;
	unsigned char value = c;

	for (mayor = 0; mayor < n; mayor++)
		veev[mayor] = value;

return (veev);
}
