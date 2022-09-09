#include <stdio.h>
/**
 * main - print numbers from 0-9 with commas and space between them
 * Description: using the main function
 * This program will print "0-9 with commas and space"
 * Return: Always Success
 */
int main(void)
{
int a;

for (a = 48; a <= 57; a++)
{
putchar(a);
if (a != 57)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
