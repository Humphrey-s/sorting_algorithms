#include <stdio.h>
#include "sort.h"
/**
 * selection_sort - sort through selection sort
 * @array: array
 * @size: size
 * Return: (Success)
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, a, b;
	int element;
	int pivot, e1;
	int d = 0;

	while (i < size)
	{
		a = i;
		element = array[a];
		e1 = array[a];

		while (a < size)
		{
			if (array[a] < element)
			{
				pivot = array[a];
				b = a;
				d = -1;
				element = array[a];
			}
			a++;
		}

		if (d == -1 && i + 1 != size)
		{
			array[i] = pivot;
			array[b] = e1;
			print_array(array, size);
		}
		i++;
		d = 0;
	}
}
