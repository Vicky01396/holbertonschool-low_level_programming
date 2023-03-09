#include "main.h"
/**
 * _isdigit - function that checks if there is a digit from 0 to 9
 * @c: variable
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
