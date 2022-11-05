#include "main.h"

/**
 * append_text_to_file - Appendds text at the end of a file
 * @filename: a pointer to the name of the file
 * @text_content: text to be appended
 *
 * Return: If the function fails - -1.
 *	otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (!filename)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);

	if (o == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		w = write(o, text_content, len);

		if (w == -1)
			return (-1);

	}
	close(o);

	return (1);
}
