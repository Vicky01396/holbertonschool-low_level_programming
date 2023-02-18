#include <stdio.h>
/**
 * main - Entry pint
 *
 * Return: Always 0 (Seccess)
 */
int main(void)
{
	int ls;

	for (ls = 10 ; ls < 20 ; ls++)
	{
		putchar((ls % 10) + '0');

		if (ls != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
