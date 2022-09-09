#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program will print when a "Program is positive, zero, or negative"
 * Return: 0
 */
int main(void)
{
int n;
int p;

srand(time(0));
n = rand() - RAND_MAX / 2;
p = n % 10;

if (p > 5)
{
	printf("Last digit of %d is %d and is greater tha 5\n", n, p);
}
else if (p == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, p);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\.", n, p);
}
return (0);
}
