#include "main.h"
#include <stdio.h>

/**
 * *_strcat - A function to concatinate string
 * @dest: first varibale
 * @src: second variable
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	/* printf("%s", result); */
	return (result);
}
