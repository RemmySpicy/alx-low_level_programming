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
	if ((input >= 65  && input <= 90) || (input >= 97 && input <= 122))
	{
		return (1);
	}

	return (0);
}
