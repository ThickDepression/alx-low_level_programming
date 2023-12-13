# C - Search Algorithms

## Overview

- This repository is dedicated to the implementation of various search algorithms as part of the ALX project.
- The project includes the implementation of linear search, binary search, jump search, interpolation search, exponential search, and advanced binary search.
- Each algorithm is designed to search for a specific value in a given data structure, and the corresponding space and time complexities are analyzed.

## Project Structure

### Tests
- [tests](./tests): Folder containing test files for all tasks, provided by ALX.

### Helper Files
#### Singly Linked List (Task 12)
- [listint](./listint): Folder of helper files for singly linked list jump search.
  - [create_list.c](./listint/create_list.c): Creates a `listint_t` singly linked list.
  - [free_list.c](./listint/free_list.c): Frees a `listint_t` singly linked list.
  - [print_list.c](./listint/print_list.c): Prints the contents of a `listint_t` singly linked list.

#### Skipped Linked List (Task 13)
- [skiplist](./skiplist): Folder of helper files for singly skipped list jump search.
  - [create_skiplist.c](./skiplist/create_skiplist.c): Creates a `skiplist_t` singly skipped list.
  - [free_skiplist.c](./skiplist/free_skiplist.c): Frees a `skiplist_t` singly skipped list.
  - [print_skiplist.c](./skiplist/print_skiplist.c): Prints the contents of a `skiplist_t` singly skipped list.

### Header File
- [search_algos.h](./search_algos.h): Header file containing data structure definitions and function prototypes for the project.

### Data Structures
- Definition of data structures used in the project: `listint_t` for singly linked list and `skiplist_t` for singly skipped list.

### Function Prototypes

| File                    | Prototype                                                       |
| ----------------------- | --------------------------------------------------------------- |
| `0-linear.c`            | `int linear_search(int *array, size_t size, int value);`        |
| `1-binary.c`            | `int binary_search(int *array, size_t size, int value);`        |
| `100-jump.c`            | `int jump_search(int *array, size_t size, int value);`          |
| `102-interpolation.c`   | `int interpolation_search(int *array, size_t size, int value);` |
| `103-exponential.c`     | `int exponential_search(int *array, size_t size, int value);`   |
| `104-advanced_binary.c` | `int advanced_binary(int *array, size_t size, int value);`      |
| `105-jump_list.c`       | `listint_t *jump_list(listint_t *list, size_t size, int value);`|
| `106-linear_skip.c`     | `skiplist_t *linear_skip(skiplist_t *list, int value);`        |

## Tasks

### 0. Linear Search
- [0-linear.c](./0-linear.c): Implementation of linear search.
- Returns the index of the first occurrence of a value in an array or -1 if not found.
- [Source](./0-linear.c)

### 1. Binary Search
- [1-binary.c](./1-binary.c): Implementation of binary search.
- Assumes a sorted array and returns the index of the value or -1 if not found.
- [Source](./1-binary.c)

### 2-6. Big O Analysis
- Time and space complexity analysis for linear search, binary search, and a custom algorithm.
- [2-O](./2-O), [3-O](./3-O), [4-O](./4-O), [5-O](./5-O), [6-O](./6-O).
- [Source](./2-O), [Source](./3-O), [Source](./4-O), [Source](./5-O), [Source](./6-O).

### 7. Jump Search
- [100-jump.c](./100-jump.c): Implementation of jump search.
- Returns the index of the value in a sorted array or -1 if not found.
- [Source](./100-jump.c)

### 8-14. More Big O Analysis
- Average time complexity analysis for jump search, interpolation search, exponential search, and advanced binary search.
- [101-O](./101-O), [107-O](./107-O), [108-O](./108-O).
- [Source](./101-O), [Source](./107-O), [Source](./108-O).

### 9. Interpolation Search
- [102-interpolation.c](./102-interpolation.c): Implementation of interpolation search.
- Returns the index of the value in a sorted array or -1 if not found.
- [Source](./102-interpolation.c)

### 10. Exponential Search
- [103-exponential.c](./103-exponential.c): Implementation of exponential search.
- Returns the index of the value in a sorted array or -1 if not found.
- [Source](./103-exponential.c)

### 11. Advanced Binary Search
- [104-advanced_binary.c](./104-advanced_binary.c): Implementation of advanced binary search.
- Returns the index of the value in a sorted array or -1 if not found.
- [Source](./104-advanced_binary.c)

### 12. Jump Search in a Singly Linked List
- [105-jump_list.c](./105-jump_list.c): Implementation of jump search in a singly linked list.
- Returns a pointer to the node containing the value or NULL if not found.
- [Source](./105-jump_list.c)

### 13. Linear Search in a Skip List
- [106-linear_skip.c](./106-linear_skip.c): Implementation of linear search in a skipped linked list.
- Returns a pointer to the node containing the value or NULL if not found.
- [Source](./106-linear_skip.c)

### 14-15. Final Big O Analysis
- Average time complexity analysis for jump search in a singly linked list and a sorted skipped linked list.
- [107-O](./107-O), [108-O](./108-O).
- [Source](./107-O), [Source](./108-O).
