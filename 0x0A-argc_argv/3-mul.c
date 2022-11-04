#include "main.h"
#include <stdio.h>

/**
 * main - prints the multiplle of two numbers
 * @argc: number of arguments passed
 * @argv: array of the arguments passed
 *
 * Return: 0
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
	{
		len ++;
	}

	while (i < len && f == 0)
	{
		if (s[i] == '-')
		{
			++d;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
			{
				digit = -digit;
			}

			n = n * 10 + digit;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			f = 0;
		}
		i++;
	}
	if (f == 0)
	{
		return (0);
	}
	
	return (n);
}

int main(int argc, char *argv[])
{
	if (argc > 3 || argc < 3)
	{
		int a;
		int b;
		int c;

		a = _atoi(argv[1]);
		b = _atoi(argv[2]);
		c = a * b;
		
		printf("%d\n", c);

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
}
