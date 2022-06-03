#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Descriptistarting from 0, followed by a new line.
 * Returnon: prints all single digit numbers of base 10
 * : 0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}

	putchar('\n');
	return (0);
}
