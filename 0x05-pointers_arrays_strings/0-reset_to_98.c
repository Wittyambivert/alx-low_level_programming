#include "main.h"

/**
 *reset_to_98 - updates a integer value to 98
 *@n: A pointer to an int that will be updated
 *
 *Return: 0
 */

void reset_to_98(int *n)
{
	int *i;

	int j = 98;

	i = &j;
	*n = *i;

}
