#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: String to be searched.
 * @needle: Substring to be located.
 *
 * Return: If the substring is located - a pointer beginning
 * If substring not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
