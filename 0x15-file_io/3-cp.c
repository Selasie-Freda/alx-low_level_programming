#include "main.h"

/**
 * main - copies the content of a file to another file
 * handles errors such as incorrect number of arguments passed
 * and errors related to reading and writing files
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	FILE *file_from, *file_to;
	char buffer[BUFFER_SIZE];
	size_t size;
	int read_size;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = fopen(argv[2], "w");
	if (file_to == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((size = fread(buffer, 1, BUFFER_SIZE, file_from)) > 0)
	{
		if (fwrite(buffer, 1, read_size, file_to) != read_size)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (fclose(file_from) != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fileno(file_from));
		exit(100);
	}
	if (fclose(file_to) != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fileno(file_to));
		exit(100);
	}
	return (0);
}
