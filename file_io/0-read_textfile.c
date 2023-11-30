#include "main.h"
/**
 *read_textfile - function that reads a text file and prints
 *@filename: name the file to read
 *@letters: letters read and print
 *Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descript, read_cont;

	char *j;

	if (!filename)
		return (0);

	file_descript = open(filename, O_RDONLY);

	if (file_descript == -1)
		return (0);

	j = malloc(sizeof(char) * letters);

	if (!j)
	{
		close(file_descript);
		return (0);
	}

	read_cont = read(file_descript, j, letters);

	if (read_cont == -1)
	{
		free(j);
		close(file_descript);
		return (0);
	}
	write(STDOUT_FILENO, j, read_cont);

	free(j);
	close(file_descript);
	return (read_cont);
}
