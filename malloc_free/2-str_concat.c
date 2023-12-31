#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 *@s1: string to concatenate
 *@s2: other string to concatenate
 *Return: pointer to new string created (success) or NULL (error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, j = 0, a = 0, b = 0;

	while (s1 && s1[a])
		a++;
	while (s2 && s2[b])
		b++;

	s3 = malloc(sizeof(char) * (a + b + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < a)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (a + b))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';

	return (s3);
}

