#include "monty.h"
/**
 * pall_func - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void pall_func(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
