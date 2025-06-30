#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an array of 8 strings representing the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int li, co;

	for (li = 0; li < 8; li++)
	{
		for (co = 0; co < 8; co++)
		{
			_putchar(a[li][co]);
		}
		_putchar('\n');
	}
}
