#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: print all lowercase alphabet
 */
void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
