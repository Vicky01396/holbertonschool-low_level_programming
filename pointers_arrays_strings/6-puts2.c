#include "main.h"
/**
 * puts2 - function that prints every second character of a string
 * starting with the first character.
 * @str: string to print
 */
void puts2(char *str)
{
	int rec = 0, cont = 0;

	for (; str[cont] != '\0';)
		cont++;
	for (; rec < cont;)
	{
		_putchar(str[rec]);
		rec += 2;
	}
	_putchar('\n');
}
