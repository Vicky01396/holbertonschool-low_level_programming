#include <stdio.h>
/**
 * main - Entry pint
 *
 * Return: Always 0 (Seccess)
 */
int main(void)
{
	int cba;

	for (cba = 'z' ; cba >= 'a' ; cba--)
	{
		putchar(cba);
	}
	putchar('\n');
	return (0);
}
