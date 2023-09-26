#include "lists.h"

/**
 * free_listint2 - A function that frees a linked list
 * @head: A pointer to the listint_t to be freed in the list
 * Done by: Mekonen-Abera
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

