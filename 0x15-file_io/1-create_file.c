#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: a pointer to the name of the file to be created
 * @text_content: A pointer to the string to wrte to the file.
 *
 * Return: If the function fails - -1.
 *	otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (!filename)
		return (-1);

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (o == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	w = write(o, text_content, len);

	if (w == -1)
		return (-1);

	close(o);

	return (1);
}
