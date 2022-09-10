#include <stdio.h>
/**
 * main - print numbers from 0-9 with commas and space between them
 *
 *  Description: using the main function
 *  This program will print "0-9 with commas and space"
 *  Return: Always Success
 */
int main(void)
{
	int c;

	for (c = 0; c < 100; c++)
	{
		putchar((c / 10) + '0');
		putchar((c % 10) + '0');
if (c != 99)
{
	putchar(',');
	putchar(' ');
}
	}
putchar('\n');
return (0);
}

