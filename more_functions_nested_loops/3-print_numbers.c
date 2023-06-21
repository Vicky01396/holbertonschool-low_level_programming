#include "main.h"
/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 */
void print_numbers(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		_putchar(numb + '0');
	}
	_putchar('\n');
}
