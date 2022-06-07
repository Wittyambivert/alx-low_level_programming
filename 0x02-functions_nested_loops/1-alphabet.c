#include "main.h"


/**
 * print_alphabet - function to print alphabet in lower case
 *
 * Description: uses function prototype
 * Return 0 success
 */




void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}


void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
