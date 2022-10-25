#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the nth node
 * of a listint_t linked list.
 *
 * @head: head of the node
 * @index: index of the node to return;
 * Return: NULL id node does not exit
 *         nth node of listint_t list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (node == NULL)
			return (0);
		head = head->next;
	}
	return (head);
}
