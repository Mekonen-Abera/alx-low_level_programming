#include "lists.h"

/**
 * get_nodeint_at_index - A function returns the node at a certain index
 * @head: The first node in the linked list
 * @index: The index of the node to  returned
 * Done by: Mekonen-Abera
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

