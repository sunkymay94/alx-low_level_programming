#include "main.h"

/**
* _strspn - Gets the length of a prefix substring
* @s: The string to be searched
* @accept: The prefix to be measured.
* Return: The number of bytes in s which
*	consist only of bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int mayor;

	while (*s)
	{
		for (mayor = 0; accept[mayor]; mayor++)
		{
			if (*s == accept[mayor])
			{
				bytes++;
				break;
			}

			else if (accept[mayor + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
