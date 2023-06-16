#include <stdio.h>

/**
 * main - a program that prints all possible different combinations
 *
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 26; n <= 36; n++)
	{
		for (m = 27; m = 37; n++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 36 || m != 37)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
