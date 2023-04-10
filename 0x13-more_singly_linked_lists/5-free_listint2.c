#include "lists.h"

/**
 * free_listint2 - This serves to free the linked lists
 * @head: This pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
 listint_t *temp;

 if (head == NULL)
 return;

 while (*head)
 {
 temp = (*head)->next;
 free(*head);
 *head = temp;
 }

 *head = NULL;
}