#include "main.h"

/**
 * _strlen - returns string length
 * @s: string to check it's length
 *
 * Return: string to check it's length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
