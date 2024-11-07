#include "main.h"

/**
 * _print_rev_recursion - Imprime une chaine de caracters a l'envers
 * @s : La chaine de caracters a imprime
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}

_print_rev_recursion(s + 1);
_putchar(*s);
}
