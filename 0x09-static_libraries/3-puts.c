#include "main.h"

/**
 * _puts - Puts a string
 * @s: the string to print
 * Return: void
 */
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		putchar(*s);
	}
	putchar('\n');
}
