#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:  pointing to a string of 0 and 1 chars.
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int bin_ui = 0;

	if (!b)
		return (0);

	for (u = 0; b[u]; u++)
	{
		if (b[u] < '0' || b[u] > '1')
			return (0);
		bin_ui = 2 * bin_ui + (b[u] - '0');
	}

	return (bin_ui);
}
