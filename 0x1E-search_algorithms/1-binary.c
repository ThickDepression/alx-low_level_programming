#include "search.h"
#include <stdio.h>

/**
 * printArray - Print elements of an array within a given range.
 * @array: Pointer to the first element of the array.
 * @left_index: Starting index of the range.
 * @right_index: Ending index of the range.
 */
void printArray(int *array, int left_index, int right_index) {
  int i;

  printf("Searching in array: ");
  for (i = left_index; i <= right_index; i++) {
    printf(" %d", array[i]);
    if (i < right_index) {
      printf(",");
    }
  }
  printf("\n");
}

/**
 * binary_search_helper - Recursive helper function for binary search.
 * @array: Pointer to the first element of the array.
 * @value: Value to be searched.
 * @left_index: Starting index of the range.
 * @right_index: Ending index of the range.
 * Return: Index of the value or -1 if not found.
 */
int binary_search_heper(int *array, int value, int left_index,
                        int right_index) {
  int mid = left_index + (right_index - left_index) / 2;

  if (left_index > right_index)
    return (-1);
  printArray(array, left_index, right_index);
  if (array[mid] == value)
    return (mid);
  else if (array[mid] > value)
    return (binary_search_heper(array, value, left_index, mid - 1));
  else {
    return (binary_search_heper(array, value, mid + 1, right_index));
  }
}
/**
 *binary_search - a function that searches for a value in a sorted
 *array of integers using the Binary search algorithm
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value of the search
 *Return: index of value or -1
 */

int binary_search(int *array, size_t size, int value) {
  if (!array)
    return (-1);
  return (binary_search_heper(array, value, 0, (int)size - 1));
}
