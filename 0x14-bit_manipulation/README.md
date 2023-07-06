# Tasks

This repository contains several tasks related to bit manipulation in the `0x14-bit_manipulation` directory. Each task is implemented in a separate file and has its own `main` function to test the functionality.

## Task 0: binary_to_uint

Implement a function `binary_to_uint` that converts a binary number to an unsigned int.

### Prototype

```c
unsigned int binary_to_uint(const char *b);
```

### Parameters

- `b`: A pointer to a string of `0` and `1` characters.

### Return

- The converted number as an `unsigned int`.

### Description

- The function converts a binary number represented as a string of `0` and `1` characters to its decimal equivalent as an `unsigned int`.
- If the string `b` contains any character other than `0` or `1`, or if `b` is `NULL`, the function should return `0`.
- The string `b` is assumed to be a valid binary number with no leading zeros.

### Example

```c
unsigned int n;

n = binary_to_uint("1");
/* n is now 1 */

n = binary_to_uint("101");
/* n is now 5 */

n = binary_to_uint("1e01");
/* n is now 0 */

n = binary_to_uint("1100010");
/* n is now 98 */

n = binary_to_uint("0000000000000000000110010010");
/* n is now 402 */
```

## Task 1: print_binary

Implement a function `print_binary` that prints the binary representation of a number.

### Prototype

```c
void print_binary(unsigned long int n);
```

### Parameters

- `n`: The number to be printed in binary representation.

### Format

- The function should print the binary representation of the number `n` without any leading zeros.

### Constraints

- You are not allowed to use arrays.
- You are not allowed to use `malloc`.
- You are not allowed to use the `%` or `/` operators.

### Example

```c
print_binary(0);
/* Output: 0 */

print_binary(1);
/* Output: 1 */

print_binary(98);
/* Output: 1100010 */

print_binary(1024);
/* Output: 10000000000 */

print_binary((1 << 10) + 1);
/* Output: 10000000001 */
```

## Task 2: get_bit

Implement a function `get_bit` that returns the value of a bit at a given index.

### Prototype

```c
int get_bit(unsigned long int n, unsigned int index);
```

### Parameters

- `n`: The number from which the bit value is to be extracted.
- `index`: The index of the bit to be extracted (starting from 0).

### Return

- The value of the bit at the given `index` (0 or 1) if the extraction is successful.
- `-1` if an error occurred (i.e., if the index is out of range).

### Example

```c
int n;

n = get_bit(1024, 10);
/* n is now 1 */

n = get_bit(98, 1);
/* n is now 1 */

n = get_bit(1024, 0);
/* n is now 0 */
```

## Task 3: set_bit

Implement a function `set_bit` that sets the value of a bit to 1 at a given index.

### Prototype

```c
int set_bit(unsigned long int *n, unsigned int index);
```

### Parameters

- `n`: A pointer to the number in which the

bit value is to be set.
- `index`: The index of the bit to be set (starting from 0).

### Return

- `1` if the bit is successfully set.
- `-1` if an error occurred (i.e., if the index is out of range).

### Example

```c
unsigned long int n;

n = 1024;
set_bit(&n, 5);
/* n is now 1056 */

n = 0;
set_bit(&n, 10);
/* n is now 1024 */

n = 98;
set_bit(&n, 0);
/* n is now 99 */
```

## Task 4: clear_bit

Implement a function `clear_bit` that sets the value of a bit to 0 at a given index.

### Prototype

```c
int clear_bit(unsigned long int *n, unsigned int index);
```

### Parameters

- `n`: A pointer to the number in which the bit value is to be cleared.
- `index`: The index of the bit to be cleared (starting from 0).

### Return

- `1` if the bit is successfully cleared.
- `-1` if an error occurred (i.e., if the index is out of range).

### Example

```c
unsigned long int n;

n = 1024;
clear_bit(&n, 10);
/* n is now 0 */

n = 0;
clear_bit(&n, 10);
/* n is still 0 */

n = 98;
clear_bit(&n, 1);
/* n is now 96 */
```

## Task 5: flip_bits

Implement a function `flip_bits` that returns the number of bits you would need to flip to get from one number to another.

### Prototype

```c
unsigned int flip_bits(unsigned long int n, unsigned long int m);
```

### Parameters

- `n`: The first number.
- `m`: The second number.

### Return

- The number of bits that need to be flipped to get from `n` to `m`.

### Example

```c
unsigned int n;

n = flip_bits(1024, 1);
/* n is now 2 */

n = flip_bits(402, 98);
/* n is now 5 */

n = flip_bits(1024, 3);
/* n is now 3 */

n = flip_bits(1024, 1025);
/* n is now 1 */
```

## Task 6: Endianness

Implement a function `get_endianness` that checks the endianness of the system.

### Prototype

```c
int get_endianness(void);
```

### Return

- `0` if the system is big endian.
- `1` if the system is little endian.

### Example

```c
int n;

n = get_endianness();
if (n != 0)
{
    printf("Little Endian\n");
}
else
{
    printf("Big Endian\n");
}
```

## Repository

- GitHub repository: alx-low_level_programming
- Directory: 0x14-bit_manipulation
- Files: 0-binary_to_uint.c, 1-print_binary.c, 2-get_bit.c, 3-set_bit.c, 4-clear_bit.c, 5-flip_bits.c, 6-endianess.c
