#include "main.h"

/**
 * *_memset -  A function to fill memory with a constant byte.
 * @s: a pointer variabe
 * @b: a character var
 * @n: an interger value
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
