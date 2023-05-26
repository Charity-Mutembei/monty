#include "monty.h"
/**
 * sub - Subtract the top element of the stack from the second top element
 * @stack: Stack head
 * @line_number: Line number
 */
void sub(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

(*stack)->next->n -= (*stack)->n;
pop(stack, line_number);
}
