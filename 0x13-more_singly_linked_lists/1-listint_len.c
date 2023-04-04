#include "lists.h"


/**
 * listint_len - a function which  returns the no of elements.
 *
 * @h: pointer to the first node
 *
 * Return: no of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t elements = 1;

	/*return 0 as number of elements when h is NULL*/
	if (h == NULL)
	return (0);

	while (h->next != NULL)
	{
		/*count the no of elements*/
		if (h->n != '\0')
			elements++;

		/*move to the next node*/
		h = h->next;
	}

		return (elements);
}
