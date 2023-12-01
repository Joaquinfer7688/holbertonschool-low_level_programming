#include "main.h"
/**
 *append_text_to_file - function appends text and end of file
 *@filename: is filename
 *@text_content: is added content
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int letters;
	int j;

	if (!filename)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);

	if (a == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		j = write(a, text_content, letters++);

		if (j == -1)
			return (-1);
	}

	close(a);
	return (1);
}
