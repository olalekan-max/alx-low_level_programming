#include "main.h"

/**
 * _strncpy - c functions that copies a string, including the
 * terminating null bytes, using at most an imputted number of byte
 * if the length of the source string is less than the maximum byte number
 * the rremainder of the destination string is filled with null bytes
 * work identically to the standard library functions "strncpy"
 * @dest:buffer storing the string copy
 * @src:the source string
 * @n:max number of byte copied
 * Return: return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
