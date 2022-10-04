#include "main.h"

/**
* create_array -> creating an array of char
* @size: size of array to be created
* @c: character intializing the array
* Return: a pointer to an array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *s;

	if (size == 0)

	return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
		s[m] = c;

	return (s);
}
