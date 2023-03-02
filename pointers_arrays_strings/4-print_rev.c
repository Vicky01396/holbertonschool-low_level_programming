#include "main.h"
/**
 * print_rev - function that prints a string, in reverse direction
 * @s: variable
 */
void print_rev(char *s)
{
	int l = 0;
	int j, x;

	for (j = 0; s[j] != '\0'; j++)
	{
		l++;
	}
	for (x = (l - 1); x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
