#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * @s: The string to be printed.
 *
 * Return: Nothing.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_putchar(s);
}
