#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *leet - A function to print values
 * @str: a string variable
 * Return: encoded
 */
char *leet(char *str)
{
	char *encoded = (char *) malloc(strlen(str) + 1);
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		encoded[j] = str[i];
		if (str[i] == 'a' || str[i] == 'A')
			encoded[j] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			encoded[j] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			encoded[j] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			encoded[j] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			encoded[j] = '1';

		i++;
		j++;
	}
	encoded[j] = '\0';
	return (encoded);
}
