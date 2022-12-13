#include "main.h"

/**
 * _islower - Entry point
 * @input: character to check it's case
 *
 * Dscription: Check if input is lower case
 * Return: 1 if input is lowercase, and 0 if input is not lowercase
 */
int _islower(int input)
{
	if (input >= 97 && input <= 122)
	{
		return (1);
	}

	return (0);
}
