#include "main.h"
/**
 * _strspn - function that obtains the length of a substring of prefixes.
 *@s: string where inital segment is taken from.
 *@accept: string to compare to
 *
 *Return: number of bytes in common
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, k, l = 0;

	for (k = 0; accept[k]; k++)
	{
		for (j = 0; s[j]; j++)
		{
			if (s[j] == ' ')
			{
				break;
			}
			if (s[j] == accept[k])
			{
				l++;
			}
		}
	}
	return (l);
}
