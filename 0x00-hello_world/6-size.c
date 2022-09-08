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

	printf("size of a char: %lu bytes(s)\n", (unsigned long)sizeof(z));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(x));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(y));
	printf("size of a int: %lu bytes(s)\n", (unsigned long)sizeof(w));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
