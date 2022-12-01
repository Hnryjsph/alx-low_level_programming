#include "main.h"

/**
 * binary_to_uint - converts a binary number 
 * @b: string 
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int deca_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deca_val = 2 * deca_val + (b[i] - '0');
	}

	return (deca_val);
}
