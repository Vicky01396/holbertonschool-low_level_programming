#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string to be encodes
 *
 * Return: the encodes string
 */
char *leet(char *str)
{
	int l, n;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (l = 0; str[l]; l++)
	{
		for (n = 0; let[n]; n++)
		{
			if (str[l] == let[n])
			{
				str[l] = num[n];
				break;
			}
		}
	}
	return (str);
}
