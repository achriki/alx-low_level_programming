#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase, followed by a new line
 *
 * Return: nothing
 */

void print_alphabet(void)
{
        int i;
	int c = 0;
	while (c < 10)
	{
		for (i = 97; i < 123; i++ )
		{
			_putchar(i);
		}
		_putchar('\n');
		c++;
	}
}
