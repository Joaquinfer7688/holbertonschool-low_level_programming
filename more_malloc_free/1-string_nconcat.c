#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat - function that concatenates two strings
 *@s1: destinations string
 *@s2: source string
 *@n: characters to be copied
 *Return: copied
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, a = 0, b = 0, c = 0;
	char *j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while  (s2[b])
		b++;

	if (n >= b)
		c = i + b;
	else
		c = i + n;

	j = malloc(sizeof(char) * c + 1);
	if (j == NULL)
		return (NULL);

	b = 0;
	while (a < c)
	{
		if (a <= i)
		j[a] = s1[a];

		if (a >= i)
		{
			j[a] = s2[b];
			b++;
		}
		a++;
	}
	j[a] = '\0';
	return (j);
}

