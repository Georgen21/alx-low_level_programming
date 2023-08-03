#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int u, group = 0;
	unsigned long int amount;

	for (u = 63; u >= 0; u--)
	{
		amount = n >> u;

		if (amount & 1)
		{
			_putchar('1');
			group++;
		}
		else if (group)
			_putchar('0');
	}
	if (!group)
		_putchar('0');
}
