#include "main.h"

/**
* _strcmp -used to compare two strings
* @s1: 1st string.
* @s2: 2nd string
* Return: 0 if s1 and s2 are equal,
* a diff number if they're not
*/

int _strcmp(char *s1, char *s2)
{
	int k = 0, l = 0;

	while (l == 0)
	{
		if ((*(s1 + k) == '\0') && (*(s2 + k) == '\0'))
			break;
		op = *(s1 + k) - *(s2 + k);
		k++;
	}
	return (l);
}
