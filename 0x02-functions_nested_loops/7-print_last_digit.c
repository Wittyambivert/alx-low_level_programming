#include "main.h"

/**
 * print_last_digit - prints last digit
 * @last: for betty
 * Return: 0
 */


int print_last_digit(int last)
{

	if (last < 0)
	{
		printlast = (-1 * (last % 10));
		putchar(printlast + '0');
		return (printlast);
	}
	else
	{
		printlast = last % 10;
		_putchar(printlast + '0');
		return (printlast);
	}


}
