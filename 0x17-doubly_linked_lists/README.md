# C - Doubly Linked Lists

This project focuses on the implementation and utilization of doubly-linked lists in the C programming language.

## Tests :heavy_check_mark:

- [tests](./tests): This directory contains test files provided by ALX for evaluating the functionality of the doubly linked list implementations.

## Header File :file_folder:

- [lists.h](./lists.h): The `lists.h` header file contains the necessary definitions and function prototypes for the various types and functions developed in the project.

| Type/File           | Definition/Prototype           |
| ------------------- | ------------------------------ |
| `struct dlistint_s` | <ul><li>`int n`</li><li>`struct dlistint_s *prev`</li><li>`struct dlistint_s *new`</li></ul> |
| `typedef dlistint_t` | `struct dlistint_s` |
| `0-print_dlistint.c` | `size_t print_dlistint(const dlistint_t *h);` |
| `1-dlistint_len.c` | `size_t dlistint_len(const dlistint_t *h);` |
| `2-add_dnodeint.c` | `dlistint_t *add_dnodeint(dlistint_t **head, const int n);` |
| `3-add_dnodeint_end.c` | `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);` |
| `4-free_dlistint.c` | `void free_dlistint(dlistint_t *head);` |
| `5-get_dnodeint.c` | `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);` |
| `6-sum_dlistint.c` | `int sum_dlistint(dlistint_t *head);` |
| `7-insert_dnodeint.c` | `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);` |
| `8-delete_dnodeint.c` | `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);` |

## Tasks :page_with_curl:

1. **Print List**
   - [0-print_dlistint.c](./0-print_dlistint.c): This C function prints all the elements present in a doubly-linked `dlistint_t` list.
   - The function also returns the count of nodes in the list.

2. **List Length**
   - [1-dlistint_len.c](./1-dlistint_len.c): A C function that calculates and returns the number of nodes within a doubly-linked `dlistint_t` list.

3. **Add Node**
   - [2-add_dnodeint.c](./2-add_dnodeint.c): This C function adds a new node to the beginning of a doubly-linked `dlistint_t` list.
   - If the addition fails, the function returns `NULL`, otherwise, it returns the address of the new element.

4. **Add Node at the End**
   - [3-add_dnodeint_end.c](./3-add_dnodeint_end.c): A C function that adds a new node at the end of a doubly-linked `dlistint_t` list.
   - The function returns `NULL` on failure and the address of the new element on success.

5. **Free List**
   - [4-free_dlistint.c](./4-free_dlistint.c): This C function is responsible for freeing the memory occupied by a doubly-linked `dlistint_t` list.

6. **Get Node at Index**
   - [5-get_dnodeint.c](./5-get_dnodeint.c): A C function that retrieves a specified node within a doubly-linked `dlistint_t` list based on its index.
   - Returns `NULL` if the node doesn't exist, otherwise, it returns the address of the located node.

7. **Sum List**
   - [6-sum_dlistint.c](./6-sum_dlistint.c): This C function calculates the sum of all data (`n`) within a doubly-linked `dlistint_t` list.
   - Returns `0` if the list is empty; otherwise, it returns the sum of the data.

8. **Insert at Index**
   - [7-insert_dnodeint.c](./7-insert_dnodeint.c): A C function that inserts a new node at a specified position within a doubly-linked `dlistint_t` list.
   - Returns `NULL` on failure and the address of the new element on success.
   - Compilation requires functions defined in [2-add_dnodeint.c](./2-add_dnodeint.c) and [3-add_dnodeint_end.c](./3-add_dnodeint_end.c).

9. **Delete at Index**
   - [8-delete_dnodeint.c](./8-delete_dnodeint.c): This C function deletes the node at a given index within a doubly-linked `dlistint_t` list.
   - Returns `-1` on failure and `1` on success.

10. **Crackme4**
    - [100-password](./100-password): This text file contains the password required for the [crackme4](https://github.com/holbertonschool/0x16.c) executable.

11. **Palindromes**
    - [102-result](./102-result): This text file holds the largest palindrome that can be formed from the product of two three-digit numbers.

12. **Crackme5**
    - [103-keygen.c](./103-keygen.c): This C function generates passwords for the [crackme5](https://github.com/holbertonschool/0x16.c) executable.
    - Usage: `./crackme5 username key`
    - Usage of the keygen: `./keygen5 username`
