#include "main.h"

/**
 * memset - fills memory with a constant byte.
 * @s: area of memory to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
