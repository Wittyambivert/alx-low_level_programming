#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 * _islower - to check if a character is capital or lowercase
 * c - for deck.
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
}

int main(void)
{
	_islower('H');

	return (0);
}
