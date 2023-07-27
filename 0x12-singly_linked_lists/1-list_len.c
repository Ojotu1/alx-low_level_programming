#include "lists.h"

/**
 * list_len - Prototype to retun the number of elements in a linked list
 * @h: A pointer to the list_t list
 * Return: Returns the number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
