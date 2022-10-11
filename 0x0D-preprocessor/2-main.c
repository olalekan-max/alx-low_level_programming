#include <stdio.h>

/**
 * main -= prints the name of the file it was complied from
 *
 * Return: everything worked ok
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
