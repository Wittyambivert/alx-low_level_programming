#include "main.h"

/**
 * print_diagonal - prints diagonal lines using putchar
 * @n: - for betty
 * Return: 0
 */

void print_diagonal(int n)
{
	char i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= n; i++)
	{
		if (i > 1)
		{
			for (j = 1; j <= i - 1; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
}
