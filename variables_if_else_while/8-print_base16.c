#include <unistd.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints all hexadecimal digits (0-9, a-f)
 * in lowercase followed by a new line using the putchar function.
 * Only putchar can be used, and it is called three times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);


	putchar('\n');


	return (0);
}
