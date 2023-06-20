#include "main.h"
/**
 * print_last_digit - function that prints the las digit of a number
 * @v: the number to test
 * Return: last namber
 */
int print_last_digit(int v)
{
	int n = v % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
