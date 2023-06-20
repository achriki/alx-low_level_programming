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
	char low[] = "abcdefghijklmnopqrstuvwxyz";
	char up[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;

	for (i = 0; i < (int) strlen(low); i++)
	{
		putchar(low[i]);
	}
	for (j = 0; j < (int) strlen(up); j++)
	{
		putchar(low[j]);
	}
	putchar('\n');
	return (0);
}
