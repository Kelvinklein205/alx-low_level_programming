#include "main.h"

/**
 * print_last_digit - function that prints last digit of a number
 * @n: is a number
 * Return: return the last value
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
