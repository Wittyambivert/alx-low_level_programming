#include "main.h"

/**
 * print_square - prints square of character
 * @size: - for betty
 * Return: 0
 */

void print_square(int size)
{
	char i;
	int size;
	int sizeCount;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (sizeCount = 0; sizeCount <= size * size; sizeCount++)
	{
		for (i = 0; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}
