#include "main.h"
/**
 * print_most_numbers - function that prints the numbers
 */
void print_most_numbers(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		if (numb == 2 || numb == 4)
		{
			numb++;
		}
		_putchar(numb + '0');
	}
	_putchar('\n');
}
