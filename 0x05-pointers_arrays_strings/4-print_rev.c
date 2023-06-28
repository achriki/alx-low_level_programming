#include "main.h"
/**
 * print_rev - print a string in backwards.
 * @str: pointer to string.
 */

void print_rev(char *str)
{
	char *s = str;
	int i;
	int c = 0;

	while (*str != '\0')
	{
		str++;
		c++;
	}

	i = c - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
