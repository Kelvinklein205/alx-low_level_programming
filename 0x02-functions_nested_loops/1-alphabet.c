#include "main.h"
/**
 * main - prints alphabets
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
