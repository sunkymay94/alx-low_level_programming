#include "main.h"

/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: The string to be searched.
* @accept: The set of bytes to be searched for.
* Return: If a set is matched - a pointer to the matched byte.
*         If no set is matched - NULL.
*/

char *_strpbrk(char *s, char *accept)

{
	int mayor;

	while (*s)
	{
		for (mayor = 0; accept[mayor]; mayor++)
		{
			if (*s == accept[mayor])
				return (s);
		}
		s++;
	}
	return ('\0');
}
