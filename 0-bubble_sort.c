#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - sort using bubble sort
 * @array: array
 * @size: size
 * Return: (Success)
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 1;
	int element;

	if ((size < 2) || (array == NULL))
		return;

	while (i < size)
	{
		element = array[i];

		if (j == size)
			break;

		if (array[j] < array[i])
		{
			array[i] = array[j];
			array[j] = element;
			print_array(array, size);
		}
		i++;
		j++;
	}

	if (sorted(array, size) != 0)
	{
		bubble_sort(array, size);
	}
}
/**
 * sorted - check if array is sorted
 * @array: array
 * @size:size of array
 * Return: (Success)
 */
int sorted(int *array, size_t size)
{
	size_t i = 0;
	size_t a = 0;
	int element;

	while (i < size)
	{
		element = array[i];
		a = i;

		while (a < size)
		{
			if (array[a] < element)
			{
				return (9);
			}
			a++;
		}
		i++;
	}
return (0);
}
