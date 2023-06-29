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
	char *result;

	while (*dest != '\0')
	{
		*result = *dest;
		dest++;
		result++;
	}

	while (*src != '\0')
	{
		*result = *src;
		src++;
		result++;
	}
	*result = '\0';
	/* printf("%s", result); */
	return (result);
}
