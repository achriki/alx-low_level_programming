#include "main.h"
/**
 * print_diagonal - entry point
 *
 * Description: Prints diagonal line
 *@n: number of times \ is printed
 */

void print_diagonal(int n)
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

			while (line < row)
			{
				_putchar(' ');
				line++;
			}
			_putchar('\\');
			_putchar('\n');
			row++;
		}
	}
}
