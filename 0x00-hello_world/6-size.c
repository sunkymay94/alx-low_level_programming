#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w;
	long int x;
	long long int y;
	char z;
	float f;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(z));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(y));
	printf("Size of a int: %lu bytes(s)\n", (unsigned long)sizeof(w));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
