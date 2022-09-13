#include <stdio.h>
/**
 * main - prints alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	void print_alphabet(void);
	{
		int ch;

		for (ch = 97; ch <= 122; ch++)
		{
			putchar(ch);
		}
	}
	putchar(10);
	return (0);
}
