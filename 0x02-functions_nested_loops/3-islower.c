#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - to check if a character is capital or lowercase
 *
 * @c:  for deck.
 *
 * main - checks main
 *
 * Return: Always 0.
 */


int _islower(int c)
{
	if (islower(c))
	{
		printf("%d\n", 1);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}

