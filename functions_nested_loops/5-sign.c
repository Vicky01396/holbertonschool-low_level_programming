#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: the number to test
 * Return: 1 if n > zero, 0 if n = zero, -1 if n < zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
