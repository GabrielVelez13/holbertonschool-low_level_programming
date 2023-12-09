#include "main.h"

/**
* create_file - creates a file with the data of text_content
* @filename: points to the filename
* @text_content: some text
* Return: 1, or -1 if failed.
*/
int create_file(const char *filename, char *text_content)
{
	int in, out, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while(text_content[len] != '\0')
		{
			len++;
		}
	}

	in = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	out = write(in, text_content, len);

	if (out == -1)
	{
		return (-1);
	}

	close(in);

	return (1);
}
