#include <stdio.h>
/**
 * main - prints tha name of the funtion
 * @argc: how many arguments are
 * @argv: the string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
