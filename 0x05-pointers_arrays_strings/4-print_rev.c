#include <stdio.h>
#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: is the string
 */
void print_rev(char *s)
{
	int r;

	r = 0;

	while (s[r] != '\0')
	{
		putchar(s[r]);
		r--;
	}
	putchar('\n');
}

