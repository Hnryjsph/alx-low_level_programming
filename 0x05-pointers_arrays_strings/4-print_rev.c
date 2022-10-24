#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: pointer that contains the refrence to tthe string
 * @length: is the length of the string
 * Return: Void
 */

void print_rev(char *s)
{
	int i, length;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i - 1;

	while (length >= 0)
	{
		_putchar(s[length]);

		length--;
	}

	_putchar('\n');
}
