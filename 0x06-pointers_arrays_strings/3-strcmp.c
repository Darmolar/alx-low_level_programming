#include "main.h"

/**
 * _strcmp - A function to compare two strigs
 * @s1: fisrt varibale
 * @s2: second variable
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
