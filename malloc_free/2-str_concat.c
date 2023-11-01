#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 *@s1: first string to concatenate
 *@s2: second string to concatenate
 *Return: pointer to new sting created or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, a = 0, b = 0;

	while (s1 && s1[a])
		a++;
	while (s2 && s2[b])
		b++;

	s3 = malloc(sizeof(char) * (a + b + a));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < a)
		{
			s3[i] = s1[i];
		}
	}
	s3[i] = '\0';
	return (s3);
}

