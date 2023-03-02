#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string.
 *
 * Return: The value.
 */
char *leet(char *str)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "43071";

	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j / 2];
			}
		}
	}
	return (str);
}
