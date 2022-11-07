#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;
	
	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *) malloc(size);

	for (x = 0; x < size; x++)
	{
		*(ptr + x) = c;
	}
	
	*(ptr + 1) = '\0';

	return (ptr);
}
