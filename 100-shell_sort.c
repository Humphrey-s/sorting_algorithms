#include "sort.h"
#include <stdio.h>
/**
 * shell_sort - sort using shell sort knuth seq
 * @array: array
 * @size: size
 * Return: (Success)
 */
void shell_sort(int *array, size_t size)
{
	size_t h = 1;
	size_t i = 0;

	UNUSED int a = 0, c = 0;
	UNUSED size_t next;
	UNUSED int b = 0;
	UNUSED int element;

	while (h < size)
	{
		h = (h * 3) + 1;
	}

	while (h > 0)
	{
	while (i < size)
	{
		a = sshell(array, size, h, 0);
		b = sshell(array, size, h, 1);

		if ((b == -1) || (a == -1))
			c = -1;

		i++;
	}
	i = 0;
	h = (h - 1) / 3;

	if (c != 0)
		print_array(array, size);
	c = 0;
	}
}
/**
 * sshell - sorts a sub list or shell
 * @array: array:
 * @size: size:
 * @start: sub shell starts
 * @h: gap
 * Return: if anything swapped return -1;
 */
int sshell(int *array, size_t size, size_t h, size_t start)
{
	size_t i = start;
	size_t next;
	int element;
	int b = 0;

	while ((i + h) < size)
	{
		next = i + h;
		element = array[i];
		if (array[next] < element)
		{
			b = -1;
			array[i] = array[next];
			array[next] = element;
		}
		i = next;
	}
return (b);
}
