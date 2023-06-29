#include <ctype.h>

/**
 * cap_string - A function to do somthing
 * @str: a string V
 * Return: ptr
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (capitalize_next && islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}

		capitalize_next = 0;

		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr == ';' || *ptr == '.' ||
				*ptr == '!' || *ptr == '?' || *ptr == '"' ||
				*ptr == '(' || *ptr == ')' || *ptr == '{' ||
				*ptr == '}')
		{
			capitalize_next = 1;
		}

		ptr++;
	}
	return (str);
}
