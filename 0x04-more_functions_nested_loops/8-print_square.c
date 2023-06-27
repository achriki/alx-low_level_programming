#include "main.h"

/**
 * print_square - print square on terminal
 *
 *@size: size of square
 */

void print_square(int n)
{
	int line = 0;
	int row = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row < n)
		{
			line = 0;

			while (line < n)
			{
				_putchar('#');
				line++;
			}
			_putchar('\n');
			row++;
		}
	}
}
