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

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
