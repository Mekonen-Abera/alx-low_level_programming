#include "lists.h"

/**
 * listint_len -A function that returns the number of elements
 * @h: linked list of type listint_t to be traversed
 * Done by: Mekonen-Abera
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

