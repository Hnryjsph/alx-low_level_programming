#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a pointer to the address of the string 
 * Return: void
 */

void rev_string(char *s)
{
	char tmp;
	int length, i, len1;

	length = 0;
	len1 = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	len1 = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
