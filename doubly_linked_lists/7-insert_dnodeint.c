#include "lists.h"

/**
*insert_dnodeint_at_index - Inserts a new node at a given position
* @h: Pointer to pointer to the head of the list
*@idx: Index where the new node should be added (starting at 0)
* @n: Value to store in the new node
*
*Return: Address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;

		*h = new;
		return (new);
	}

	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = tmp->next;
	new->prev = tmp;

	if (tmp->next != NULL)
		tmp->next->prev = new;

	tmp->next = new;

	return (new);
}
