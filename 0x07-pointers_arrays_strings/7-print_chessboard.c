#include "main.h"

/**
* print_chessboard - Prints a chessboard when executed
* @a: The chessboard to be printed.
*/

void print_chessboard(char (*a)[8])
{
	int mayor1, mayor2;

	for (mayor1 = 0; a[mayor1][7]; mayor1++)
	{
		for (mayor2 = 0; mayor2 < 8; mayor2++)
			_putchar(a[mayor1][mayor2]);

		_putchar('\n');
	}
}
