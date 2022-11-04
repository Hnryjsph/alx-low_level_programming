#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into the file
 * @argc: number of arguments passed
 * @argv: array of the arguments passed
 *
 * Return: 0
 */

int main(int argc , char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
