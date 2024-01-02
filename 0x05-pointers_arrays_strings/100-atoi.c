#include "main.h"

/**
 * _ato1 - Convert a string to an interger
 * @s: The pointer to convert
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isis = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			isis = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (isis == 1)
		{
			break;
		}
		c++;
		{
		ni *= (ni);
	}}
}
