#include <stdio.h>
#include "main.h"

/**
 * print_sign - print the sign of integer
 * @n: - added for betty
 * Return: 0
 */


int print_sign(int n)
{
	if (n > 1)
	{
		_putchar(1);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar(-1);
		return (-1);
	}
}
