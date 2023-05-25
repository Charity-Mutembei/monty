#include "monty.h"
/**
 * is_valid_interger - checks if the string is a valid integer
 * @str: string to check
 * Return: 1 if valid integer, 0 otherwise
 */
int is_valid_interger(char *str)
{
int i = 0;

if (str[0] == '-')
{
i++;
}

for (; str[i] != '\0'; i++)
{
if (str[i] < '0' || str[i] > '9')
{
return (0);
}
}
return (1);
}
/**
 * convert_to_int - converts string to integer
 * @str: string to convert
 * Return: converted integer
 */
int convert_to_int(char *str)
{
int result = 0;
int sign = 1;
int i = 0;

if (str[0] == '-')
{
sign = -1;
i++;
}

for (; str[i] != '\0'; i++)
{
result = result * 10 + (str[i] - '0');
}

return (result *sign);
}

/**
 * push_error - handles the error condition for push
 * @line_number: line_number
 * Return: no return
 */
void push_error(unsigned int line_number)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
fclose(stack_second.file);
free(stack_second.value);
/*stack_free(*stacky);*/
exit(EXIT_FAILURE);
}
/**
 * push - Pushes an element to the stack.
 * @stack: Double pointer to the stack (linked list).
 * @line_number: Line number in the file.
 */
void push(stack_t **stack, unsigned int line_number)
{
if (stack_second.arg)
{
if (is_valid_interger(stack_second.arg))
{
int result = convert_to_int(stack_second.arg);
if (stack_second.sight == 0)
{
addnode(stack, result);
}
else
{
addqueue(stack, result);
}
}
else
{
push_error(line_number);
}
}
else
{
push_error(line_number);
}
}
