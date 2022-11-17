#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */

int sum_them_all(const unsigned int n, ...)
{
    int i;
    int sum = 0;
    if (n == 0)
    {
        return (0);
    }

    va_list ptr;

    va_start(ptr, n);

    for (i = 0; i < n; i++)
    {
        sum = sum + va_arg(ptr, int);
    }

    va_end(ptr);

    return sum;

}
