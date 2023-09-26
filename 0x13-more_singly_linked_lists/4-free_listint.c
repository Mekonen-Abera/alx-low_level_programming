#include "lists.h"

/**
 * free_listint -A function that frees a linked list
 * @head: listint_t list to be freed
 * Done by: Mekonen-Abera
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

