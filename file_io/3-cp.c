#include "main.h"


/**
* close_file - closes a file
* @file: the file to close
*/
void close_file(int file)
{
	int c;

	c = close(file);

	if (c == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
* main - copies a file to another
* @argc: argument count
* @argv: argument value
* Return: 0
*/
int main(int argc, char *argv[])
{
	int f_from, f_to, input, output;
	char *buffer[1024];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	if (!argv[1])
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (f_to == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	f_from = open(argv[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((input = read(f_from, buffer, 1024)) != 0)
	{
		if (input == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		output = write(f_to, buffer, input);
		if (output == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_file(f_from);
	close_file(f_to);
	return (0);
}
