#include "main.h"
/**
 * rev_string - function that inverts a string.
 * @s: variable
 */
void rev_string(char *s)
{
	int m = 0, l = 0;
	char str;

	while (s[m])
	{
		m++;
	}
	while (l < m--)
	{
		str = s[l];
		s[l++] = s[m];
		s[m] = str;
	}
}
