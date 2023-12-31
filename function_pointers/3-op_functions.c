#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *op_add - sum of two integers
 *@a: int
 *@b: int
 *Return: (@a + @b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - difference of two integers
 *@a: int
 *@b: int
 *Return: (@a - @b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - product of two integers
 *@a: int
 *@b: int
 *Return: (@a * @b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division of two integers
 *@a: int
 *@b: int
 *Return: (@a / @b)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - remainder of the division of two integers
 *@a: int
 *@b: int
 *Return: (@a % @b)
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

