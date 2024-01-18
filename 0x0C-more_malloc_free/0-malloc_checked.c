#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - create  normal process
 * @b: allocated memory
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
