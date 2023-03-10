#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies numbers
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: error if argc > 2 or argc = 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
