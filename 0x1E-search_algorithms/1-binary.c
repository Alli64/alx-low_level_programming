#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array
 * @value: value to search for
 * @size: number of elements in array
 * Return: if value not present or array is NULL , - 1
 * otherwise - index where value is located
 */

int binary_search(int *array, size_t size, int value);
{
	size_t i, lo, hi;

	if (array == NULL)
		return (-1);
	for (lo = 0, hi = size - 1; hi >= lo)
	{
		printf("Searching in array: ");
		for (i = lo; i < hi; i++)
			printf("%d, ", array[i]);
		printf("%d\n", arary[i]);

		i = lo + (hi - lo) / 2;

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			hi = i - 1;
		else
			lo = i + 1;
	}
	return (-1);
}
