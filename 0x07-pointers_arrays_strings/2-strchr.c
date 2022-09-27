#include "main.h"

/**
* _strchr - Locates a character in a string
 * @s: The string to be searched.
 * @c: The character to be located.
 * Return: If c is found - a pointer to the first occurence.
 * else Return NULL
*/

char *_strchr(char *s, char c)
{
	int mayor;

	for (mayor = 0; s[mayor] >= '\0'; mayor++)
	{
		if (s[mayor] == c)
			return (s + mayor);
	}
	return ('\0');
}
