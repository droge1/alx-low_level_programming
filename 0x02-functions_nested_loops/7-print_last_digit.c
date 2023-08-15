#include "main.h"

/**
 * print_last_digit - This function prints the
 * last digit of a number
 *
 * @i: this is the function parameter
 *
 * Return: This function returns k
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
