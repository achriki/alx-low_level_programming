#include "main.h"

/**
 * print_square - print square on terminal
 *
 *@size: size of square
 */

void print_square(int n)
{
	int line = 1;
    int row = 1;
    if(n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        while(row <= n)
        {
            while(line <= n)
            {
                _putchar('#');
                line++;
            }
            _putchar('\n');
            line++;
        }
    }
}
