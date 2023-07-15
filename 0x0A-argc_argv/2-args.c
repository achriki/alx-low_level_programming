#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *@argc: number of args
 *@argv: pointer to args'array
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
