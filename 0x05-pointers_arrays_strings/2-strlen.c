#include "main.h"

/**
 * _strlen - A function to return the length of a variabe
 * @s: A pointer variable
 * Return: 0 - 1
 */

int _strlen(char *s)
{
	int strlens = 0;

	while (*s != '\0')
	{
		strlens++;
		s++;
	}

	return (strlens);
}
