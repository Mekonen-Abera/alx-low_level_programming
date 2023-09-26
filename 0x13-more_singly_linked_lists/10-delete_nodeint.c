#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes a node in a linked list
 * @head:The pointer to the first element in the list
 * @index: The index of the node to be deleted
 * Done by: Mekonen-Abera
 * Return: 1 (Success), or -1 (fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

