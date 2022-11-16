#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - prints the name of the passed variable
* @name: string of name
* @f: pointer to a function
*/

void print_name(char *name, void(*f)(char *))
{
    if (!name || !f)
    {
        return;
    }

    (*f)(name);
}
