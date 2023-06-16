#include <stdio.h>

/**
 * main - a program that prints all possible different combinations
 * Return: 0
 */
int main(void)
{
	int n, m;

	for (n = 47; n <= 56; n++)
	{
		for (m = 48; n <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
