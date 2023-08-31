#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need to flip
 * @n: The first number
 * @m: The number n flipped to
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
