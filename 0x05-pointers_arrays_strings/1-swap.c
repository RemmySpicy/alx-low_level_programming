#include "main.h"

/**
 * swap_int - takes two integers and swap their values
 * @a: first integer value
 * @b: seconf integer value
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
