#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char var[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < (int) strlen(var); i++)
	{
		putchar(var[i]);
	}
	putchar('\n');
	return (0);
}
