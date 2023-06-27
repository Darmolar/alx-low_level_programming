#include "main.h"

/**
 * swap_int - A function to swap value
 * @a: A pointer  variable
 * @b: A pointer variable
 * Return : void
 */

void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
