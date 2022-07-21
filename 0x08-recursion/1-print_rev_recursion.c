#include "main.h"

/**
 *_puts_recursion - a function that prints a string in reverse
 * @s: string to be reversed , passed into the function as a parameter
 *
 */

void _puts_recursion(char *s)

{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
	}
	while (i >= 0)
	{
	i--;
	_putchar(s[i]);
	}
	return (0);
}

