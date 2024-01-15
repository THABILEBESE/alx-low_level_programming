#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: the string to get the lenght of
 * Return: 0
 */
int _strlen(char *s)
{
	int string_length = 0;

		while (s[string_length])
			string_length++;
	return (string_length);
}
