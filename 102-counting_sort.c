#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * counting_sort - sort using counting s
 * @array: array
 * @size: size of array
 * Return: (Success)
 */
void counting_sort(int *array, size_t size)
{
	int largest = get_largest(array, size), k = largest + 1;
	size_t a = 0, b = 0;
	int count = 0, i = 0;
	int *array_count = malloc(sizeof(int) * k);
	int *array2 = malloc(sizeof(int) * size);

	for (i = 0; i < k; i++)
	{
		for (a = 0; a < size; a++)
		{
			if (i == array[a])
			{
				count++;
				array2[b] = i;
				b++;
			}
		}
		array_count[i] = count;
	}
	print_array(array_count, k);
	b = 0;

	while (b < size)
	{
		array[b] = array2[b];
		b++;
	}
}
/**
 * get_largest - get largest element in an array
 * @array: array
 * @size: size
 * Return: (Return largest element in array)
 */
int get_largest(int *array, size_t size)
{
	int element;
	size_t a = 0, b = 0;

	while (a < size)
	{
		element = array[a];
		b = 0;
		while (b < size)
		{
			if (array[b] > element)
				break;
			b++;
		}
		if (b == size)
			break;
		a++;
	}
return (element);
}