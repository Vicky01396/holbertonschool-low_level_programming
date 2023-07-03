#include <stdio.h>
/**
 * main - prints tha name of the funtion
 * @argc: how many arguments are
 * @argv: the string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
