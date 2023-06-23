#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: Prints diagonal line
 *@n: number of times \ is printed
 */

void print_diagonal(int n)
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
                _putchar(' ');
                line++;
            }
            _putchar('\\');
            _putchar('\n');
            row++;
        }
    }
}
