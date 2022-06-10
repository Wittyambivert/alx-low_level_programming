#include "main.h"

/**
 * more_numbers - function to print 0 - 14 with putchar
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
	}
}
