#include "main.h"

/**
 * print_diagonal -> This function prints a diagonal line
 * @n: This is the integer paramarater
 */
void print_diagonal(int n)
{
	int k, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (k = 0; k < n; k++)
		{
			for (i = 0; i < k; i++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
