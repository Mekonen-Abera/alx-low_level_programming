#include "lists.h"

/**
 * print_listint - A function that prints all the elements
 * @h: linked list of type listint_t to be printed
 *
 * Done by: Mekonen-Abera
 * Return:the number of nodes
 */

size_t print_listint(const listint_t *h)
{
    size_t node_count = 1;
    if (h == NULL)
         return (0);
    while (h->next != NULL)
    {
         printf("%d\n", h->n);
         h = h->next;
         node_count++;
    }
    printf("%d\n", h->n);
    return (node_count);
}
