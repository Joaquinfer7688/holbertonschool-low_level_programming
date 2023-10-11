#include <stdio.h>
/**
 * main - single-digit numbers
 *
 * Return:0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
