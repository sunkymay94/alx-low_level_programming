#include "main.h"

/**
* str_concat -a string that concatenates two func
* @s1: first string
* @s2: second string
* Return: first string  + second string
*/

char *str_concat(char *s1, char *s2)
{
	int k = 0, l = 0, m = 0, n = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k])
		k++;
	while (s2[l])
		l++;

	m = k + l;
	s = (char *)malloc(m * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	l = 0;
	while (n < l)
	{
		if (n < i)
			s[n] = s1[n];
		if (n >= i)
		{
			s[n] = s2[l];
			l++;
		}
		n++;
	}
	s[n] = '\0';
	return (s);
}
