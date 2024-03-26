#include "main.h"
#include <stdio.h>

/**
 * _puts - Puts a string
 * @str: the string to print
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
