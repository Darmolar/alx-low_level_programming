#include <stdio.h>

/**
 * string_toupper - A function to convert vert lower case to upper case
 * @str: A string varibale
 * Return: str
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
