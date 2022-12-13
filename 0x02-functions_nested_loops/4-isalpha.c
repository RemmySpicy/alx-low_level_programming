#include "main.h"

/**
 * _isalpha - Entry point
 * @c: Character to check if it's alpha
 *
 * Return: Return 1 if char is an alphabet
 * Description: Check if input is an alphabet
 */
int _isalpha(int c)
{
	if ((c >= 65  && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
