#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array name
 * @n: is the number of element of the array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			_putchar("%d, ", a[inc]);
		else
			_putchar("%d", a[inc]);
	}
	_putchar(10);
}
