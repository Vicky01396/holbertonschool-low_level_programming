#include "main.h"
/**
 * print_to_98 - print all natural numbers fron n to 98
 * @n: the number to start counting
 */
void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%d, ", a);
		}
	}
	else
	{
		for (a = n; a > 98; a--)
		{
			printf("%d, ", a);
		}
	}
	printf("98\n");
}
