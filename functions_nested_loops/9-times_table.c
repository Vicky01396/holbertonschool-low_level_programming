#include "main.h"
/**
 * times_table - function that prints the table of 9
 */
void times_table(void)
{
	int line, column, mult;

	for (line = 0; line <= 9; line++)
	{
		_putchar('0');
		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');

			mult = line * column;
			if (mult <= 9)
			{
				_putchar(' ');
				_putchar(mult + '0');
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
