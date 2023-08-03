#include "main.h"

/**
 * flip_bits -  number of bits you would need to flip.
 * @n: the nth number of flip.
 * @m: the mth number of flip.
 * Return: umber of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int u, group = 0;
	unsigned long int amount;
	unsigned long int contains = n ^ m;

	for (u = 63; u >= 0; u--)
	{
		amount = contains >> u;
		if (amount & 1)
			group++;
	}

	return (group);
}
