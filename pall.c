#include "monty.h"
/**
 * pall - Prints all the values on the stack.
 * @stack: Double pointer to the stack (linked list).
 */
void pall(stack_t **stack)
{
stack_t *current = *stack;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
}
