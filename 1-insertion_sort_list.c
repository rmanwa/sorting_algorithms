#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list
 * of integers in ascending order
 * @list: Pointer to a pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		prev = current->prev;
		while (prev != NULL && prev->n > current->n)
		{
			temp = prev->prev;
			prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = prev;
			current->prev = prev->prev;
			if (prev->prev != NULL)
				prev->prev->next = current;
			else
				*list = current;
			prev->prev = current;
			current->next = prev;
			print_list(*list);
			prev = temp;
		}
		current = current->next;
	}
}
