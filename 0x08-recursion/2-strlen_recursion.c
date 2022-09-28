
#inlude "main.h"

/**
 * _strlen_recursion - caculates the length of a string
 * @s: string to be used
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
