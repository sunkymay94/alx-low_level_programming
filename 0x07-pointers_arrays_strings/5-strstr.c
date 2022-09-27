#include "main.h"
#include <stdio.h>

/**
* _strstr - Locates a substring
* @haystack: The string to be searched
* @needle: The substring to be located
* Return: If the substring is located - a pointer to the beginning
*		of the located substring
*		If the substring is not located - NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int mayor;

	if (*needle == 0)
	return (haystack);

	while (*haystack)
	{
		mayor = 0;

		if (haystack[mayor] == needle[mayor])
		{
			do {
				if (needle[mayor + 1] == '\0')
					return (haystack);

				mayor++;

			}	while (haystack[mayor] == needle[mayor])
		}
		haystack++
	}
	return ('\0')
}
