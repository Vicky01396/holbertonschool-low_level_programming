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
		int i, j;

		for (i = 0; haystack[i]; i++)
		{
			for (j = 0; needle[j]; j++)
			{
				if (needle[j] != haystack[i + j])
				{
					break;
				}
			}
			if (!needle[j])
			{
				return (haystack + i);
			}
		}
		return ('\0');
}
