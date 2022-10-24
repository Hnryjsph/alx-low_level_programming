#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first variable to be swaped
 * @b: second variable to be swaped
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
