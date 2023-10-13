#include "main.h"
/**
 * _isdigit - write function that checks for uppercase character
 *@c: the number to be checked
 * Return: 1 if c is a digit or 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= 48 && c<= 57)
	{
		return (1);
	}
	return (0);
}
