#include "main.h"
#include <stdlib>
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
	char *array;
	unsigned int index;

	if (size == 0)
		return (Null);
	array = malloc(sizeof(char) * size);

	if (array == Null)
		return (Null);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
