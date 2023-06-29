#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - A function to copy string
 * @dest: first varibale
 * @src: second variable
 * @n: AN integer varibale
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
