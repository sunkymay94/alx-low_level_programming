#include <stdio.h>

/**
* main - Prints the name of the file of the program
*        was compiled from, followed by a new line.
* Return: Always sucess
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
