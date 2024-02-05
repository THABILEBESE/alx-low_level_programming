#include "lists.h"
#include <stdio.h>

/**
 * listint_len - count the number of elemnt in a list
 * @h: head pointer
 * Return: number of element i the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
