#include "main.h"

/**
 * * print_line - function that draws a straight line on the terminal
 * @n: variable
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r;

		for (r = 0; r < n; r++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
