#include <stdio.h>
#include <ctype.h>
#include "main.h"


/**
 * _isupper - function to print uppercase check
 * @c: - for betty
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
