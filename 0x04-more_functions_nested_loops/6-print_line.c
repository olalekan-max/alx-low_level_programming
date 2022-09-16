#include <stdio.h>
#include "main.h"

/**
 * print-line - prints a straight line
 * @n: input number of times to print '_'
 * Return: a straight lin
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
