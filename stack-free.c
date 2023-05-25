#include "monty.h"
/**
* stack_free - frees a doubly linked list
* @stacky: head of the stack
*/
void stack_free(stack_t *stacky)
{
stack_t *temp;

temp = stacky;

while (stacky)
{
temp = stacky->next;
free(stacky);
stacky = temp;
}
}
