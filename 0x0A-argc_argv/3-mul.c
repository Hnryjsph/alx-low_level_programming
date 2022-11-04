#include "main.h"
#include <stdio.h>

/**
 * main - prints the multiplle of two numbers
 * @argc: number of arguments passed
 * @argv: array of the arguments passed
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (sizeof(argv) > 1)
	{
		int a;
		int b;
		int c;

		a = argv[1];
		b = argv[2];
		c = a * b;
		
		printf("%d\n", c);
	}
	else
	{
		printf("Error");

		return (1);
}
