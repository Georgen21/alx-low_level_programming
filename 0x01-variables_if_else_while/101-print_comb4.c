#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: 0
 */
int main(void)
{
	int b, i, j;

	for (b = '0'; b <= '9'; b++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (b < i && i < j)
				{
					putchar(b);
					putchar(i);
					putchar(j);
					if (b != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

