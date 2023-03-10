#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed to a program
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d\n", atoi(argv[0]));
	}
	return (0);
}
