#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate of the string str
 * @str: the string to duplicate
 *
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int n, i = 0;

	if (str == NULL)
		return (NULL);
	n = 0;
	while (str[n] != '\0')
		n++;

	s = malloc(sizeof(char) * (n + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		s[i] = str[i];
	return (s);
}
