#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

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

/* Printing helper functions */
void displayArray(const int *array, size_t size);
void displayList(const listint_t *list);

/* Sorting algoritms */
void sortBubble(int *array, size_t size);
void sortInsertionList(listint_t **list);
void sortSelection(int *array, size_t size);
void sortQuick(int *array, size_t size);
void sortShell(int *array, size_t size);
void sortCocktailList(listint_t **list);
void sortCounting(int *array, size_t size);
void sortMerge(int *array, size_t size);
void sortHeap(int *array, size_t size);
void sortRadix(int *array, size_t size);
void sortBitonic(int *array, size_t size);
void sortQuick_hoare(int *array, size_t size);

#endif /* SORT_H */
