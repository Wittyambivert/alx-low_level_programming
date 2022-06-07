#include <stdio.h>

/**
 * main - Prints the word _putchar
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char word[8] = "_putchar";
	int i = 0;

	while (i <= 7)
	{
		putchar(word[i]);
		putchar('\n');
	}



	return (0);
}
