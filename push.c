#include "monty.h"

/**
 * is_integer - checks if a string represents a valid integer
 * @str: the string to check
 * Return: 1 if the string is a valid integer, 0 otherwise
 */
int is_integer(const char *str)
{
if (*str == '-' || *str == '+')
str++;

if (*str == '\0')
return (0);

while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}

return (1);
}

/**
 * exit_program - Helper function
 * to free stack and exit program
 * @stack: taken in
 */
void exit_program(stack_t **stack)
{
fclose(stack_second.file);
free(stack_second.value);
stack_free(*stack);
exit(EXIT_FAILURE);
}

/**
 * push - add node to the stack
 * @stack: stack head
 * @line_number: line_number
 * Return: no return
 */
void push(stack_t **stack, unsigned int line_number)
{
int n;
char *error_message = "L%d: usage: push integer\n";

if (stack_second.arg == NULL || !is_integer(stack_second.arg))
{
fprintf(stderr, error_message, line_number);
exit_program(stack);
}

n = atoi(stack_second.arg);
if (stack_second.sight == 0)
addnode(stack, n);
else
addqueue(stack, n);
}
