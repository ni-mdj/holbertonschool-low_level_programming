#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Prints the alphabet in lowercase using the putchar function
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}
	putchar('\n')

	return (0);
}
