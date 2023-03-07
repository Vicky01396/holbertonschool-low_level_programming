# include "main.h"
/**
 * sqrtaux - auxiliar function
 * @n: integer number
 * @x: integer number
 * Return: the auxiliar
 */
int sqrtaux(int x, int n)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (sqrtaux(x + 1, n));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number to be squared
 * Return: has natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrtaux(1, n));
}
