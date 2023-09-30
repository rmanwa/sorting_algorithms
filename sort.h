#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/* Structures */
/**
 * struct listint_s - Doubly linked list node structure
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Function prototypes */
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void selection_sort(int *array, size_t size);
int lomuto(int *array, size_t size, int low, int high);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap_nodes(listint_t *node1, listint_t *node2, listint_t **list);
void counting_sort(int *array, size_t size);
void build_output_array(int *array, size_t size, int min,
		int *count_array, int *output);
void update_count_array(int *count_array, int range);
void initialize_count_array(int *array, size_t size,
		int min, int *count_array);

#endif /* SORT_H */
