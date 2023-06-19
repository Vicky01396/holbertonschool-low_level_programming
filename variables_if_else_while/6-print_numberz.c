#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 57; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
