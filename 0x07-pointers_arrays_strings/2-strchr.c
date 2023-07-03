#include "main.h"
#include <stdlib.h>

/**
 * *_strchr - A function to check for character
 * @s: a pointer variable
 * @c: a chracter variable
 * 
 * Return: a pointer to chracter @c
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while(*s)
	{
		if(*s != c)
			s++;
		else
			return (s);
	}
	if(c == '\0')
		return (s);

	return (NULL);
}
