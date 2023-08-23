#include "main.h"

/**
 * reverse_array - This function  reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; c < n--; b++)
	{
		b = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
