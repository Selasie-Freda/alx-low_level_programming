#include <stdio.h>
/**
 * main - prints name of an executable file
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
