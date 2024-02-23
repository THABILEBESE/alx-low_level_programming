#include "lists.h"
/**
 * free_listint - a function that frees a linked list
 * @head: pointer to the first node of the list
 * Return: no return
 */
void freee_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		freee(temp);
	}
}
