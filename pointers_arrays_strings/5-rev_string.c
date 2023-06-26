#include "main.h"
/**
 * rev_string -  function that reverses a string.
 * @s: string to print
 */
void rev_string(char *s)
{
	int read = 0, daer = 0;
	char save;

	while (s[read])
		read++;	
	while (daer < read--)
	{
		save = s[daer];
		s[daer++] = s[read];
		s[read] = save;
	}
}
