#include "main.h"

/**
 *  *_memset -  A function to fill memory with a constant byte.
 * @s: a pointer variabe
 * @b: a character var
 * @: an interger value
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
