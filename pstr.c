#include "monty.h"

/**
 * f_pstr - Print the string starting at the top of the stack
 * @stack: Stack head
 * @line_number: Line number
 */
void f_pstr(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
(void)line_number;
while (current && current->n != 0 && current->n >= 0 && current->n <= 127)
{
if (current->n == ' ')
break;
putchar(current->n);
current = current->next;
}

putchar('\n');
}
