#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: Pointer to the first string compared
 * @s2: Pointer to the second string compared
 * Return: If str1 < str2, the negative difference of unmatched character
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
