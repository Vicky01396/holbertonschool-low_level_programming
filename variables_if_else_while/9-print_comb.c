#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sd;

	for (sd = 10; sd < 20; sd++)
	{
		putchar((sd % 10) + '0');

		if (sd != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
