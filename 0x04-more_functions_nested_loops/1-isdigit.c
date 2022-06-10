#include "main.h"

/**
 * _isdigit - function to check digits
 * @c: - for betty
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
