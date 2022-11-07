#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of the given characters
 * @size: the size of the array
 * @c: the character to be filled in the array
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *) malloc(size);
	
	if (p == NULL)
	{
		return (0);
	}
	for (x = 0; x < size; x++)
	{
		*(ptr + x) = c;
	}

	*(ptr + 1) = '\0';

	return (ptr);
}
