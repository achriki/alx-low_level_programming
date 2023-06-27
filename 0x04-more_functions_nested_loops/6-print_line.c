#include "main.h"
/**
 * print_line - entry point
 *
 * Description: Prints lines
 *@n: number of lines
 */

void print_line(int n)
{
	int line = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (line <= n)
		{
			_putchar('_');
			line++;
		}
		_putchar('\n');
	}
}
