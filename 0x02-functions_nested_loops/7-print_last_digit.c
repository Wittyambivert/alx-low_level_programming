#include "main.h"

/**
 * print_last_digit - prints last digit
 * @last: for betty
 * Return: 0
 */


int print_last_digit(int last)
{
	int printlast = last % 10;

	putchar(printlast + '0');

	return (printlast);
}
