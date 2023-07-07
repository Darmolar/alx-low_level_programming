#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - A function to prints every other character of a string
 * @s: A String  variable
 * Return : void
 */

void puts2(char *s)
{
	int i;
	int sLength = strlen(s);

	for (i = 0; i < sLength; i++)
	{
		if (i % 2 == 0)
		{
			putchar(s[i]);
		}
	}
	putchar('\n');
}
