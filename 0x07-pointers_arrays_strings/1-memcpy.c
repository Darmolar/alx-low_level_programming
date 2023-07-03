#include "main.h"

/**
 * *_memcpy - a function that copies memory area..
 * @dest: a pointer variabe
 * @src: a character var
 * @: an interger value
 *
 * Return: a pointer to the memory area @s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
