# Python - Dynamic libraries

In this project, explore the integration of dynamic libraries between Python and C, delving into the creation and utilization of these libraries. The project will cover concepts such as creating dynamic libraries, utilizing libraries within Python, and performing mathematical operations across the two languages.

## Objectives :scroll:

* **0. Bridging the Gap: Creating a Powerful Dynamic Library**
  * [libdynamic.so](./libdynamic.so): A dynamic C library encompassing a suite of essential functions, as listed below:
    * `int _putchar(char c);`
    * `int _islower(int c);`
    * `int _isalpha(int c);`
    * `int _abs(int n);`
    * `int _isupper(int c);`
    * `int _isdigit(int c);`
    * `int _strlen(char *s);`
    * `void _puts(char *s);`
    * `char *_strcpy(char *dest, char *src);`
    * `int _atoi(char *s);`
    * `char *_strcat(char *dest, char *src);`
    * `char *_strncat(char *dest, char *src, int n);`
    * `char *_strncpy(char *dest, char *src, int n);`
    * `int _strcmp(char *s1, char *s2);`
    * `char *_memset(char *s, char b, unsigned int n);`
    * `char *_memcpy(char *dest, char *src, unsigned int n);`
    * `char *_strchr(char *s, char c);`
    * `unsigned int _strspn(char *s, char *accept);`
    * `char *_strpbrk(char *s, char *accept);`
    * `char *_strstr(char *haystack, char *needle);`
  * [main.h](./main.h): Header file that outlines the function prototypes found within `libdynamic.so`.

* **1. Weaving the Threads: Crafting the Library of All Libraries**
  * [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh): A Bash script responsible for generating a dynamic library named `liball.so`. This library amalgamates all `.c` files residing in the current directory.

* **2. When Python Meets C: Unleashing the Power of Cross-Language Functions**
  * [100-operations.so](./100-operations.so): A dynamic C library equipped with fundamental mathematical operation functions that can be harnessed in Python.
  * Functionality encompasses:
    * `int add(int a, int b);`
    * `int sub(int a, int b);`
    * `int mul(int a, int b);`
    * `int div(int a, int b);`
    * `int mod(int a, int b);`
