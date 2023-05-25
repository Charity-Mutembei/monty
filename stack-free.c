#include "monty.h"
/**
* stack_free - frees a doubly linked list
* @stacky: head of the stack
*/
void stack_free(stack_t *stack)
{
stack_t *temp;

temp = stack;

while (stack)
{
temp = stack->next;
free(stack);
stack = temp;
}
}
