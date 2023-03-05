#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int u, d;

	for (u = 0; u < 8; u++)
	{
		for (d = 0; d < 8; d++)
		{
			_putchar(a[u][d]);
		}
		_putchar('\n');
	}
}
