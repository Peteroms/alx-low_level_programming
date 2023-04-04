#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: pointer to first node of the list
 *
 * Return: nothing
*/

void free_listint(listint_t *head)
{
	listint_t *current;

	/*iterate through each node in list*/
	while ((current = head) != NULL)
	{
		/*set head as next node*/
		head = head->next;
		free(current);
	}
}
