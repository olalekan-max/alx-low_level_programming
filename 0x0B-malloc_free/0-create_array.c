#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of size with char c
 * @size: unsigned int type
 * @c: char type
 * Return: Return pointer to array created
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
