#include "main"
#include <stdio.h>

/**
 * main - Prints all the arguments passed to it
 * @argc: the number of arguments passed to it
 * @argv: the array of the arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv)
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}

	return (0);
}
