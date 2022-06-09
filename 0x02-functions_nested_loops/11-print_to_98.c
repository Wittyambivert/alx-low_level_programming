#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from n to 98
 * Return: Always 0.
 */


void print_to_98(int n)
{
	if (n > 98)
	{
		do {
			printf("%d, ", n);
			n--;
		} while (n >= 98);
	}
	else
	{
		do {
			printf("%d, ", n);
			n++;
		} while (n <= 98);
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}	

}
