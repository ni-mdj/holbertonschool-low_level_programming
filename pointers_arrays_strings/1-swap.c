#include "main.h"

/**
 * swap_int - the values of two integers
 * @a: first
 * @b: second
 *
 * Description: function that swaps the values of two integers
 */

void swap_int(int *a, int *b)
{
int i;

i = *a;
*a = *b;
*b = i;
}
