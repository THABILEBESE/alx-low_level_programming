#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list.
* @head: pointer to the beginning of the list
*
* Return: address of the node where the loop starts or NULL if there's no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tortoise, *hare;

if (head == NULL || head->next == NULL)
return (NULL);

tortoise = head->next;
hare = head->next->next;

while (tortoise && hare && hare->next)
{
if (tortoise == hare)
{
tortoise = head;
break;
}
tortoise = tortoise->next;
hare = hare->next->next;
}

if (!tortoise || !hare || !hare->next)
return (NULL);

while (tortoise != hare)
{
tortoise = tortoise->next;
hare = hare->next;
}

return (hare);
}
