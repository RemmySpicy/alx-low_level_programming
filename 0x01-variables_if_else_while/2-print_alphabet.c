#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char smol;

	for (smol = 'a'; smol <= 'z'; smol++)
		putchar(smol);
	putchar('\n');

	return (0);

}
