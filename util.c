#include <ctype.h>
#include "monty.h"

/**
 * is_digit - checks str if digit
 * @string: str
 *
 * Return: 1 if success,otherwise 0
 */
int is_digit(char *string)
{
	if (!string || *string == '\0')
		return (0);
	if (*string == '-')
		string++;
	while (*string)
	{
		if (isdigit(*string) == 0)
			return (0);
		string++;
	}
	return (1);
}
/**
 * isnumber - checks if str is num
 * @str: string
 *
 * Return: 1 if str is num, otherwise 0.
 */
int isnumber(char *str)
{
	int i;

	if (!str)
		return (0);

	for (i = 0; str[i]; i++)
		if (i < '0' || i > '9')
			return (0);

	return (1);
}

