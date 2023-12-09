#include "main.h"


void close_file(int file);

/**
* main - copies a file to another
* @argc: argument count
* @argv: argument value
* Return: 0
*/
int main(int argc, char *argv[])
{
	int f_from, f_to, input, output;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	f_from = open(argv[1], O_RDONLY);
	input = read(f_from, buffer, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | 0664);

	while (input > 0)
	{
		if (f_from == -1 || input == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		output = write(f_to, buffer, input);
		if (f_to == -1 || output == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		input = read(f_from, buffer, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);
	}

	free(buffer);
	close_file(f_from);
	close_file(f_to);

	return (0);
}


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
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
