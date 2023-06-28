#include "main.h"
/**
 * print_most_numbers - entry point
 *
 * Description: Prints the numbers with _putchar without 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
