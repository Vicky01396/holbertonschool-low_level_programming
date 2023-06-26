#include "main.h"
/**
 * print_rev - function that prints a string, in reverse.
 * @s: string to print
 */
void print_rev(char *s)
{
	int n, rev;

	for (n = 0; s[n] != '\0';)
	{
		n++;
	}
	for (rev = n - 1; rev >= 0; rev--)
		_putchar(s[rev]);
	_putchar('\n');
}
