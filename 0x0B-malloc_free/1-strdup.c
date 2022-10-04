#include "main.h"

/**
* _strdup - string duplicating function
* @str: string to be duplicated
* Return: a string pointer
*/

char *_strdup(char *str)
{
	int m = 1, n = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[m])
		m++;
	s = (char *)malloc(m * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	while (n < m)
	{
		s[n] = str[n];
		n++;
	}
	s[n] = '\0';
	return (s);
}
