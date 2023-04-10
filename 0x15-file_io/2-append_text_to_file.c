#include "main.h"

/**
 * append_text_to_file- a funnction that appends text to the end of a file.
 * @filename: The file to be appended on.
 * @text_content: Pointer to the text to be appended.
 * Return: 1 if successfuly appended, -1 otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (0 == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
