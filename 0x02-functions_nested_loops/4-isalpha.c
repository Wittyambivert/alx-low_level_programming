#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry code
 *
 * _isalpha - function to check alpha
 *
 * @c: placeholder for betty
 *
 * Return: 0
 *
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
