#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n: is the number of time it should be printed
 * Return: no return
 */
void print_diagonal(int n)
{
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; n > k; k++)
		{
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
