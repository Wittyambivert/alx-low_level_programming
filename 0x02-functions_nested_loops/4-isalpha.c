#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - added main
 *
 * _isalpha - functio to check alpha
 *
 * @c: placeholder for betty
 * 
 * Return 0 as usual
 *
 */

int _isalpha(int c)
{
	if(isalpha(c))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
