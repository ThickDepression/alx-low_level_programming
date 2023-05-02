#include "lists.h"

/**
 *print_listint_safe - prints the list
 *@head: node
 *Return: returns num of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *temp;

    while (head != NULL)
    {
        printf("[%p] %d\n", (void *)head, head->n);
        count++;
        temp = head;
        head = head->next;
        if (temp <= head)
        {
            printf("-> [%p] %d\n", (void *)head, head->n);
            exit(98);
        }
    }
    return (count);
}
