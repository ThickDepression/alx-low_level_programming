# C - Hash Tables Readme

In this project, we explore hash tables and hashing techniques in C.

## Header File:

* [hash_tables.h](./hash_tables.h): This header file contains data structure definitions and function prototypes for the project.

Data Structures:
```
- `hash_node_t`: Structure to represent a node in a hash table.
- `hash_table_t`: Structure to define a hash table.
- `shash_node_t`: Structure for a sorted hash table node.
- `shash_table_t`: Structure for a sorted hash table.
```

Sources: [hash_tables.h](./hash_tables.h)

Function Prototypes:

- `hash_table_create(unsigned long int size)`: Creates a hash table.
  - Returns a pointer to the new hash table or NULL on failure.

- `hash_djb2(const unsigned char *str)`: Implements the djb2 hashing algorithm.

- `key_index(const unsigned char *key, unsigned long int size)`: Returns the index to store a key/value pair in a hash table.

- `hash_table_set(hash_table_t *ht, const char *key, const char *value)`: Adds a key-value pair to a hash table.
  - Returns 1 on success, 0 on failure.

- `hash_table_get(const hash_table_t *ht, const char *key)`: Retrieves the value associated with a key from a hash table.
  - Returns the value or NULL if not found.

- `hash_table_print(const hash_table_t *ht)`: Prints the contents of a hash table.
  - Prints key/value pairs in the order they appear in the table.

- `hash_table_delete(hash_table_t *ht)`: Deletes a hash table and its elements.

- `shash_table_create(unsigned long int size)`: Creates a sorted hash table.
  - Returns a pointer to the new sorted hash table or NULL on failure.

- `shash_table_set(shash_table_t *ht, const char *key, const char *value)`: Adds a key-value pair to a sorted hash table.
  - Inserts pairs in alphabetical order.

- `shash_table_get(const shash_table_t *ht, const char *key)`: Retrieves the value associated with a key from a sorted hash table.

- `shash_table_print(const shash_table_t *ht)`: Prints a sorted hash table in ascending order.

- `shash_table_print_rev(const shash_table_t *ht)`: Prints a sorted hash table in descending order.

- `shash_table_delete(shash_table_t *ht)`: Deletes a sorted hash table and its elements.

Sources: [Function Prototypes](./hash_tables.h)

## Tasks:

### Task 0: Creating a Hash Table
- **Description**: Implement a function that creates a hash table.
- **Code**: [0-hash_table_create.c](./0-hash_table_create.c)
- **Analysis**: The code checks for failure and returns NULL if unsuccessful. It initializes the hash table and allocates memory dynamically.

### Task 1: Implementing djb2 Hashing
- **Description**: Implement the djb2 hashing algorithm.
- **Code**: [1-djb2.c](./1-djb2.c)
- **Analysis**: This code is a straightforward implementation of the djb2 hashing algorithm.

### Task 2: Finding the Index for a Key
- **Description**: Implement a function to find the index for a key in a hash table.
- **Code**: [2-key_index.c](./2-key_index.c)
- **Analysis**: The function calculates the index using a hash function and modulo operation.

### Task 3: Adding Key-Value Pairs
- **Description**: Implement a function to add key-value pairs to a hash table.
- **Code**: [3-hash_table_set.c](./3-hash_table_set.c)
- **Analysis**: The code checks for key validity, allocates memory, and handles collisions using linked lists.

### Task 4: Retrieving Values
- **Description**: Implement a function to retrieve values from a hash table.
- **Code**: [4-hash_table_get.c](./4-hash_table_get.c)
- **Analysis**: The code traverses the hash table, searching for the key and returning the associated value if found.

### Task 5: Printing a Hash Table
- **Description**: Implement a function to print the contents of a hash table.
- **Code**: [5-hash_table_print.c](./5-hash_table_print.c)
- **Analysis**: The code iterates through the table, printing key-value pairs.

### Task 6: Deleting a Hash Table
- **Description**: Implement a function to delete a hash table.
- **Code**: [6-hash_table_delete.c](./6-hasb_table_delete.c)
- **Analysis**: The code frees memory and handles linked list elements correctly.

### Task 7: Sorted Hash Table
- **Description**: Implement a sorted hash table with alphabetical ordering.
- **Code**: [100-sorted_hash_table.c](./100-sorted_hash_table.c)
- **Analysis**: This code extends the hash table with sorted insertion and includes functions for printing in reverse order.
