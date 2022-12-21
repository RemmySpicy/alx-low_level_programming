#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	char j = _strlen(*s);
	char tmp = s;

	for (j -= 1; j >= 0; j--)
		s[i] = tmp[j]
}
