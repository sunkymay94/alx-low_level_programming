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

	printf("Size of a char: %d bytes(s)\n",sizeof(z));
	printf("Size of an int: %d bytes(s)\n",sizeof(w));
	printf("Size of a long int: %d bytes(s)\n",sizeof(x));
	printf("Size of a long long int: %d bytes(s)\n",sizeof(y));
	printf("Size of a float: %d bytes(s)\n",sizeof(f));
	return (0);
}
