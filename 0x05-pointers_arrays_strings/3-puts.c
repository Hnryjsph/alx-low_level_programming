#include "main.h"

/**
 * _puts - prints a string followed buy a new line
 * @str: contains the string
 *
 * Return: Void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
