#include "main.h"
/**
 * more_numbers - function that prints 10 times the number
 */
void more_numbers(void)
{
	int num, line;

	for (num = 0; num <= 9; num++)
	{
		for (line = 0; line <= 14; line++)
		{
			if (line >= 10)
			{
			_putchar((line / 10) + '0');
			}
		_putchar((line % 10) + '0');
		}
		_putchar('\n');
	}
}
