#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @stack: stack head
 * @line_number: line_number
 * Return: no return
*/
void add(stack_t **stack, unsigned int line_number)
{
stack_t *g;
int length = 0, s;

g = *stack;
while (g)
{
g = g->next;
length++;
}
if (length < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
fclose(stack_second.file);
free(stack_second.value);
stack_free(*stack);
exit(EXIT_FAILURE);
}
g = *stack;
s = g->n + g->next->n;
g->next->n = s;
*stack = g->next;
free(g);
}
