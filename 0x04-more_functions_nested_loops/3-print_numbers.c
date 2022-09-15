#include "main.h"

/**
 * print_numbers - function that prints from 0 to 9
 * @n: is an integer
 * Return: 0
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
