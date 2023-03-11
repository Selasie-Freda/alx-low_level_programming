#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{

		for (i = 1; i < argc; i++)
		{
			if (isdigit(atoi(argv[i])) == 1)
			{
				printf("Error\n");
				return (1);
			}
			else if (isdigit(atoi(argv[i])) == 0)
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
