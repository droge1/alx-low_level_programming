#include "main.h"

/**
 * print_line - This function is responsible for  printing line
 * @n: integer params
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
			_putchar(95);
		_putchar('\n');
	}
}
