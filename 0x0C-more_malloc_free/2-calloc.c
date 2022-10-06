#include "main.h"
/**
 * _calloc - functions that allocates memory for an array
 * @nmemb: interger
 * @size: size of the array
 * Return: a pointer to an allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p = malloc(nmemb * size);
	unsigned int n;

	if (nmemb == 0 && size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	if (n = 0, n < (nmemb * size), n++)
		p[n] = 0;
	return (p);
}
