#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char smol;
	char E;
	char Q;

	E = 'e';
	Q = 'q';

	for (smol = 'a'; smol <= 'z'; smol++)
	{
		if (smol != E && smol != Q)
			putchar(smol);
	}
	putchar('\n');
	return (0);
}

