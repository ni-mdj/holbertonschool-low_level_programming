#include "variadic_functions.h"

/**
* sum_them_all - multiply numbers
* @n: variable for the first number
*
* Description : multiply rayane
* Return: return 0
*/

int sum_them_all(const unsigned int n, ...)
{
va_list rayane;
unsigned int i;
int sum;

if (n == 0)
{
return (0);
}
va_start(rayane, n);
for (i = 0 ; i  < n; i++)
{
sum + = va_arg(rayane, int);
}
va_end(rayane);
return (sum);
}
