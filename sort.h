#ifndef SORT_H
#define SORT_H
#include <stddef.h>
#define UNUSED __attribute__((unused))

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
int sorted(int *array, size_t size);

void insertion_sort_list(listint_t **list);
void swap(listint_t **list, listint_t *left, listint_t *right);
int sortedl(listint_t **list);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);
size_t get_p(int *array, size_t size, size_t to);

void shell_sort(int *array, size_t size);
int sshell(int *array, size_t size, size_t h, size_t start);

void counting_sort(int *array, size_t size);
int get_smallest(int *array, size_t size);
int get_largest(int *array, size_t size);
void _free(int *array, size_t size);

void merge_sort(int *array, size_t size);
void merge_sortr(int *array, size_t size, size_t l, size_t h);
#endif
