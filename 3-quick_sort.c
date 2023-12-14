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
	size_t pop = get_p(array, size, size - 1);

	while (sorted(array, size) != 1)
	{
		pop = get_p(array, size, pop);
	}
}
/**
 * sorted - checks whether array is sorted
 * @array: array
 * @size: size of array
 * Return: (1) sorted (-1) not sorted
 */
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
/**
 * get_p - gets pos of pivot
 * @array: array
 * @size: size
 * @to: pos of pivot
 * Return: returns pos of pivot
 */
size_t get_p(int *array, size_t size, UNUSED size_t to)
{
	size_t i = 0;
	size_t j;
	int element;
	int pivot = array[to];

	while (i < size)
	{
		if (array[i] > pivot)
		{
			j = i;
			element = array[i];
			while (j < size)
			{
				if (array[j] <= pivot)
				{
					array[i] = array[j];
					array[j] = element;
					print_array(array, size);

					pivot = array[to];
					break;
				}
				j++;
			}
		}
		i++;
	}
return (to - 1);
}
