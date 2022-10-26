#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node in a linked list
 *				at a given position
 * @head: pointer to the head of the list
 * @index: index of the list where the new node will be added
 *
 * Return: 1 - if function succeeds,
 *	-1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);

	return (1);
}
