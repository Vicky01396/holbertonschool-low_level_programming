#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: variable
 */
void puts_half(char *str)
{
	int c = _strlen(str), n = 0;

	if ((c % 2) == 0)
	{
		for (n = (c / 2); n < c; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = ((c / 2) + 1); n < c; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
