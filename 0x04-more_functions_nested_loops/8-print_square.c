#include "main.h"

/**
 * print_square - prints square of character
 * @size: - for betty
 * Return: 0
 */

void print_square(int size)
{
	char i;
	int sizeCount;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (sizeCount = 1; sizeCount <= size; sizeCount++)
	{
		for (i = 1; i <= size - 1; i++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}
