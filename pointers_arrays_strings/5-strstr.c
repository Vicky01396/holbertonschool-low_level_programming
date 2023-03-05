#include "main.h"
/**
 * _strstr - function that locates a substring
 * @needle: substring to be located in haystack
 * @haystack: main string
 * Return: a pointer to the beginning of the localized substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, l;
	char *o;

	for (i = 0; needle[i] != '\0'; i++)
	{
		if (needle[i] == '\0')
		{
			return (haystack);
		}
		for (l = 0; haystack[l] != '\0';)
		{
			if (needle[i] == haystack[l])
			{
				o = haystack + l;
			}
			l++;
		}
		if (needle[i] != haystack[l])
		{
			break;
		}
	}
	if (o[0] == '\0')
	{
		return (0);
	}
	return (o);
}
