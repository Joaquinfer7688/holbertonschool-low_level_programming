#include "main.h"
/**
 *create_file - function that creates file
 *@filename: is a filename
 *@text_content: is a content writed in a file
 *Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int a;
	int letters;
	int j;

	if (!filename)
		return (-1);
	
	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (a == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;
	j = write(a, text_content, letters);

	if (j == -1)
		return (-1);

	close(a);
	return (1);
}
