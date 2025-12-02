#include "lists.h"
/**
 * add_node - Adds a new node at the beginning list_t list.
 * @head: Pointer to the head of the list_t list.
 * @str: String to be added to the list_t list.
 *
 * Return: If function fails - NULL else - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *scopy;
	unsigned int slen;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	scopy = strdup(str);
	if (scopy == NULL)
	{
		free(new);
		return (NULL);
	}

	for (slen = 0; str[slen] != '\0'; slen++)

	new->str = scopy;
	new->len = slen;
	new->next = *head;

	*head = new;

	return (new);
}
