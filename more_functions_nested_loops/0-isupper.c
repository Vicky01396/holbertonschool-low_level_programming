#include "main.h"
/**
 * _isupper - function that checks if a character is in uppercase.
 * @c: the character to check
 *  Return: 1 if is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
