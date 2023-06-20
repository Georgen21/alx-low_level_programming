#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: ...
 */

void jack_bauer(void)
{

	int i, k;

	i = 0;

	while (i < 24)
	{
		k = 0;
		while (k < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar('\n');
			k++;
		}
		i++;
	}
}

