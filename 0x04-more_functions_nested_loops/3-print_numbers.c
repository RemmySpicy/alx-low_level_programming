#include "main.h"

/**
 * print_numbers - Print numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar(num + '0');

	_putchar(10);
}
