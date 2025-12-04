#include "lists.h"

/**
*dlistint_len -- return the numbers of elements in a linked dlistint_t list
*@h: the head of the dlistint_t list
*
*Return: the numbers of elements in the dlistint_t list
*/

size_t dlistint_len(const dlistint_t *h)
{

size_t count = 0;

while (h != NULL)
{

count++;
h = h->next;

}

return (count);

}
