#include "main.h"
/**
 * _isalpha - function that checks for alphabetical characters
 * @c: The character to check
 *
 * Return: 1 if c is an alphabetical character, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
