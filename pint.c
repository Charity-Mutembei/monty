#include "monty.h"
/**
 * f_pint - prints the top
 * @stack: stack head
 * @line_number: line_number
 * Return: no return
*/
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		fclose(stack_second.file);
		free(stack_second.value);
		stack_free(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
