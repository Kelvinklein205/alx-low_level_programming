#include <stdio.h>
#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: is a charater
 * Return: 0
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}
	return (0);
}
