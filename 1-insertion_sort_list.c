#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list - sort linked list via insertion
 * @list: list
 * Return: (Success)
 */
void insertion_sort_list(listint_t **list)
{
	UNUSED size_t i = 0, a = 0;
	UNUSED listint_t *ptr = *list, *p2;


	if (*list == NULL)
		return;

	while (sortedl(list) != 1)
	{
		ptr = *list;
		i = 0;

	while (ptr != NULL)
	{
		p2 = ptr->next;
		if (p2 == NULL)
			break;

		if (p2->n < ptr->n)
		{
			swap(list, ptr, p2);
			print_list(*list);
			break;
		}
		i++;
		ptr = ptr->next;
	}
	}
}
/**
 * swap - swap nodes
 * @list: list
 * @left: node 1
 * @right: node 2
 * Return: (Success)
 */
void swap(listint_t **list, listint_t *left, listint_t *right)
{
	UNUSED listint_t *l_prev = left->prev, *l_next = left->next;
	UNUSED listint_t *r_prev = right->prev, *r_next = right->next;

	if (l_prev == NULL)
	{
		right->prev = NULL;
		right->next = left;

		left->prev = right;
		left->next = r_next;

		if (r_next != NULL)
			r_next->prev = left;

		*list = right;
		return;
	}

	if (r_next == NULL)
	{
		l_prev->next = right;
		right->prev = l_prev;

		right->next = left;
		left->prev = right;

		left->next = NULL;
		return;
	}

	l_prev->next = right;
	right->prev = l_prev;

	right->next = left;
	left->prev = right;

	left->next = r_next;
	r_next->prev = left;
}
/**
 * sortedl - check if linked list is sorted or NOt
 * @list: linked list;
 * Return: SORTED (1) ELSE -1
 */
int sortedl(listint_t **list)
{
	listint_t *ptr = *list;
	listint_t *ptr2 = *list;
	int element = ptr->n, Enext;

	while (ptr != NULL)
	{
		element = ptr->n;
		ptr2 = ptr->next;

		while (ptr2 != NULL)
		{
			Enext = ptr2->n;

			if (Enext < element)
				return (-1);
			ptr2 = ptr2->next;
		}
		ptr = ptr->next;
	}
return (1);
}
