#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
* print_numbers - Prints numbers followed by a new line
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
*
* Description: this function prints a variable number of integers,
* separated by the given separator string.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if (i < n - 1 && separator != NULL)

printf("%s", separator);
}

printf("\n");

va_end(args);
}
