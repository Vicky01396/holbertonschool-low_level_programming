#include "main.h"
/**
 * _atoi - function that converts a string to an integer
 * @s: the string
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	 unsigned int num = 0, sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
		sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
		num = num * 10 + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
		s++;
	}
	return (sign * num);
}
