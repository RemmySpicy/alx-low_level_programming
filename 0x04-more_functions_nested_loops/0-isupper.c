#include "main.h"

/**
 * _isupper - check if character is uppercase
 * @c: character to be chcked
 *
 * Return: 1 if character is uppercase and 0 if not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
