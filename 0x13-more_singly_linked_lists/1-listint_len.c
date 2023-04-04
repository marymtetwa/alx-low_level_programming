#include "lists.h"

/**
 * Question 1 of assignment 0x13.c
 * @h :linked list of type listint_t to traverse
 * listint_len - returns the number of elements in a linked lists
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t num = 0;

/*using the while loop*/

while (h)
{
num++;
h = h->next;
}
return (num);
}
