#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: variable
 *
 * Return: last number
 */
int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
