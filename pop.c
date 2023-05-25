#include "monty.h"
/**
 * pop - prints the top
 * @stack: stack head
 * @line_number: line_number
 * Return: no return
*/
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *h;

if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
fclose(stack_second.file);
free(stack_second.value);
stack_free(*stack);
exit(EXIT_FAILURE);
}
h = *stack;
*stack = h->next;
free(h);
}
