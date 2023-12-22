#include "main.h"

/**
 * print_square - prints a square using "#" followed by a new line
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		putchar ('\n');
	}
	else
	{
		int n, j;

		for (n = 0; n < size; n++)
		{
			for (j = 0; j < size; j++)
			{
				putchar ('#');
			}
			putchar ('\n');
		}
	}
}
