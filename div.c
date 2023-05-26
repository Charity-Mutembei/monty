#include "monty.h"

/**
 * f_div - Divide the second top element of the stack by the top element
 * @stack: Stack head
 * @line_number: Line number
 */
void f_div(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

if ((*stack)->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
exit(EXIT_FAILURE);
}

(*stack)->next->n /= (*stack)->n;
pop(stack, line_number);
}
