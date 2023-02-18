#include <stdio.h>
/**
 * main - Entry pint
 *
 * Return: Always 0 (Seccess)
 */
int main(void)
{
	int n;

	for (n = 0 ; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
