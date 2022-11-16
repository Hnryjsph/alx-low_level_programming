#include <stdio.h>

/**
* print_name - prints the name of the passed variable
* @name: string of name
*
* Return: void
*/

void print_name(char *name, void(*f)(char *))
{
    (*f)(name);
}
