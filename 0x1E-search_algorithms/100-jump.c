#include "search.h"
#include <math.h>
#include <stdio.h>
/**
 *jump_search - a function that searches for a value in
 *a sorted array of integers using the Jump search algorithm
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value of the search
 *Return: index of value or -1
 */

int jump_search(int *array, size_t size, int value) {
  int low, jump, i;

  jump = (size_t)sqrt(size);
  for (i = 0; i < (int)size; i += jump) {
    printf("Value checked array[%d] = [%d]\n", i, array[i]);
    if (array[i] < value)
      low = i;
    else
      break;
  }
  printf("Value found between indexes [%d] and [%d]\n", low, (int)size - 1);
  for (i = low; i < (int)size; i++) {
    printf("Value checked array[%d] = [%d]\n", i, array[i]);
    if (array[i] == value) {
      return (i);
    }
  }
  return (-1);
}
