#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Done by:Mekonen-Abera
 * Return:The data inside the elements that was deleted, and
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

