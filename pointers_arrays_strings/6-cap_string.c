#include "main.h"
/**
 * cap_string - function that capitalizes all words in a string.
 * @simb: string to be capitalized
 * Return: modification of the string
 */

char *cap_string(char *simb)
{
	int l;

	if (simb[0] >= 'a' && simb[0] <= 'z')
	{
		simb[0] -= 32;
	}
	for (l = 1; simb[l] != '\0'; l++)
	{
		if ((simb[l - 1] == ' ' || simb[l - 1] == '\t' || simb[l - 1] == '\n'
	|| simb[l - 1] == ',' || simb[l - 1] == ';' || simb[l - 1] == '.'
	|| simb[l - 1] == '!' || simb[l - 1] == '?' || simb[l - 1] == '\"'
	|| simb[l - 1] == '(' || simb[l - 1] == ')' || simb[l - 1] == '{'
	|| simb[l - 1] == '}') && (simb[l] >= 'a' && simb[l] <= 'z'))
		{
			simb[l] -= 32;
		}
	}
	return (simb);
}
