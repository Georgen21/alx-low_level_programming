#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the string b binary
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int jack;
	int j, k;

	if (!b)
		return (0);

	jack = 0;

	for (j = 0; b[j] != '\0'; j++)
		;

	for (j--, k = 1; j >= 0; j--, k *= 2)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}

		if (b[j] & 1)
		{
			jack += k;
		}
	}

	return (jack);
}
