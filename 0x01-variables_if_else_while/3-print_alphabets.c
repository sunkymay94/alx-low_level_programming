#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program will print when a "Program is positive, zero, or negative"
 * Return: Always Success
 */
int main(void)
{
char c;
for (c = 'a' ; c <= 'z'; c++)
{
	putchar(c);
}
for (c = 'A' ; c <= 'Z' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
