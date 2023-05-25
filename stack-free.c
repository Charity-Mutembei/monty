#include "monty.h"
/**
* stack_free - frees a doubly linked list
* @stack: head of the stack
*/
void stack_free(stack_t *stack)
{
stack_t *current = stack;
stack_t *next;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
