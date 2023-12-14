#include "sort.h"
#include <stdio.h>
#include <stddef.h>
/**
 * quick_sort - sort integers using quick_s lomuto
 * @array: array
 * @size: size of array
 * Return: (Success)
 */
void quick_sort(int *array, size_t size)
{
	size_t d = get_p(array, size, 0, size - 1);
	size_t s;

	/*printf("%lu\n", d);*/
	d = get_p(array, size, d + 1, size - 1);

	s = size - 1;
	while (sorted(array, size) != 1)
	{
		if (d == s)
			s = s - 1;

		d = get_p(array, size, 0, s);
	}
}

int sorted(int *array, size_t size)
{
	size_t i = 0;
	size_t a;
	int element;

	while (i < size)
	{
		element = array[i];
		a = i;
		while (a < size)
		{
			if (array[a] < element)
			{
				return (-1);
			}
			a++;
		}
		i++;
	}
return (1);

}
size_t get_p(int *array, size_t size, size_t from, size_t to)
{
	size_t i = to;
	size_t j = from;
	int pivot = array[to];
	int element;

	for (; i >= j; i--)
	{
		if (array[i] < pivot)
		{
			element = array[i];
		for (; j <= i; j++)
		{
			if (array[j] > pivot)
			{
				array[i] = array[j];
				array[j] = element;
				print_array(array, size);
				j++;
				break;
			}
		}
		if (i + 1 == j)
			break;
	}
	}
	/*printf("%lu   %lu\n", i, j);*/
	if (i + 1 == j && array[j] != pivot)
	{
		array[to] = array[j];
		array[j] = pivot;
		print_array(array, size);
	}

return (j);
}
