#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard
 * @a: 2D array representing the chessboard
 *
 * Description: This function prints the chessboard represented
 * by a 2D array of characters.
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}
