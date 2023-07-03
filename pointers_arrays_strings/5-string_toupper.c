#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters
 * in a string to uppercase.
 * @letter: string
 *
 * Return: modified string
 */

char *string_toupper(char *letter)
{
	int l = 0;

	while (letter[l])
	{
		if (letter[l] >= 'a' && letter[l] <= 'z')
		{
			letter[l] -= 32;
		}
		l++;
	}
	return (letter);
}
