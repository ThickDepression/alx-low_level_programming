#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_realloc - a function that reallocates a memory block
 *@ptr: a pointer to the memory previously allocated
 *@old_size: the size of the allocated space for ptr
 *@new_size: the new size, in bytes of the new memory block
 *Return: return ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_block;

	if (ptr == NULL)
	{
		new_block = malloc(new_size);
		return (new_block);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (new_size > old_size)
	{
		new_block = malloc(new_size);
		if (new_block == NULL)
			return (NULL);
		memcpy(new_block, ptr, old_size);
		free(ptr);
		return (new_block);
	}
	if (new_size < old_size)
	{
		if (old_size - new_size >= sizeof(void *))
			return (ptr);
		new_block = malloc(new_size);
		if (new_block == NULL)
			return (NULL);
		memcpy(new_block, ptr, new_size);
		free(ptr);
		return (new_block);
	}
	return (ptr);
}
