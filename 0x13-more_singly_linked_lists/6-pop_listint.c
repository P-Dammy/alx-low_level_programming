#include "lists.h"

/**
 * pop_listint - deletes the head node in a linked list
 * @head: pointer to the head of the list
 *
 * Return: head nodes's data (n) or
 *	0 - if the liked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
	return (0);

	*head = temp->next;
	n = temp->n;
	return (n);
}
