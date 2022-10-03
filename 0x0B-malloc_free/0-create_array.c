#include "notrebloh.h"
#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: size of the array
 * @c: character to insert
 * Return: Null if size is zero or if it fails
 * pointer to array if everthing is normal.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (Null);
	}

	s = malloc((size) * sizeof(char));
	if (s == Null)
	{
		return (Null);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
