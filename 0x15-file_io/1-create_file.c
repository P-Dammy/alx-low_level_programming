#include "main.h"
#include <stdlib.h>

/**
 * create_file - Creates a file.
 * @filename: a pointer to the name of the file to be created
 * @text_content: A pointer to the string to wrte to the file.
 *
 * Return: If the function fails - -1.
 *	otherwise - 1.
 */
int create_file(const char *filename, char *text_content);
{
	int o, w, len = 0;

	if ((filename == NULL) || (text_content == NULL))
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0, text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0500);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);

	return (1);
}
