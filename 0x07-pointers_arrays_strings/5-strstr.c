#include "main.h"
/**
 * _strstr - function that locate a substring
 * @haystack: source string
 * @needle: substring
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int b = 0, c;

	while (haystack[b])
	{
		while (needle[c])
		{
			c = 0;
		if (haystack[b + c] != needle[c])
		{
			break;
		}
		c++;
		}
		if (needle[c] == '\0')
		{
			return (haystack + b);
		}
		b++;
	}
	return ('\0');
}
