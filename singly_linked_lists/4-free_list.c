#include "lists.h"

/**
*free_list -- free a list_t list
*@head: a pointer to a list_t list
*
*/

void free_list(list_t *head)
{
	list_t *actual;

	while (head != NULL)
	{
		actual = head->next;
		free(head->str);
		free(head);
		head = actual;
	}
}
