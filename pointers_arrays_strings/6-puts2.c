#include "main.h"
/**
 * puts2 - function that prints every second character of a string
 * @str: variable
 */
void puts2(char *str)
{
	int g;

	for (g = 0; str[g] != '\0'; g += 2)
	{
		_putchar(str[g]);
	}
	_putchar('\n');
}
