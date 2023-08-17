#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of the dlistint_t list
 * @head: pointer to the head of the dlistint_t list
 * @n: intenger of the new node to contain
 * Return: address of the new node, otherwise - NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new->next = h;

	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
