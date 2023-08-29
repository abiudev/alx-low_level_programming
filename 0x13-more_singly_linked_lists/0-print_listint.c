#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list
 * @h: Pointer to a linked list of type listint_t to print
 *
 * Return: Number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
