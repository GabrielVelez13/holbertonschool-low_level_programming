#include "main.h"

/**
* read_textfile - reads a file and prints its data to the stdout.
* @filename: points to the filename
* @letters: number of letters to read.
* Return: Number of letters output, or 0 if failed.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t in, _read, out;
	char *buffer_in;

	if (filename == NULL)
	{
		return (0);
	}

	buffer_in = malloc(sizeof(buffer_in) * letters);
	if (buffer_in == NULL)
	{
		return (0);
	}

	in = open(filename, O_RDONLY);
	_read = read(in, buffer_in, letters);
	out = write(STDOUT_FILENO, buffer_in, _read);

	if (out == -1 || out != _read)
	{
		free(buffer_in);
		return (0);
	}

	free(buffer_in);
	close(in);

	return (out);
}
