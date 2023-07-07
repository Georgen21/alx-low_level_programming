#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *a;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			a = argv[i];

			for (k = 0; k < strlen(a); k++)
			{
				if (a[k] < 48 || a[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(a);
			a++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
