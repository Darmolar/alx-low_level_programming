#include "main.h"
#include <stdio.h>

/**
 * *_strncat - A function to concatinate string
 * @dest: first varibale
 * @src: second variable
 * @n: AN integer varibale
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	/* printf("%s", result); */
	return (result);
}
