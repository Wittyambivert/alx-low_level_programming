#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 * @last: for betty
 * Return: 0
 */


int print_last_digit(int last)
{
	_putchar(last % 10);
	return (last % 10);
}