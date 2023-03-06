#include "main.h"

/**
 * _print_rev_recursion - function that prints a string backwards.
 * @s: the pointers of the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
