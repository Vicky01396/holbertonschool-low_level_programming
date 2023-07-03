#include "main.h"
/**
 *_strpbrk - function that searches an arbitrary string in a byte array.
 *@s: the string to search in
 *@accept: the set of bytes to search
 *Return: a pointer to the byte of s that matches one of the accept bytes,
 *or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
