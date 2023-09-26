#include "lists.h"

/**
 * sum_listint - A function calculates the sum of all the data in a list
 * @head: The first node in the linked list
 * Done by: Mekonen-Abera
 * Return: The result sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

