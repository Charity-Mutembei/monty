#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure.
 */
int main(int argc, char *argv[])
{
char value[1024];
FILE *file;
size_t size = sizeof(value);
stack_t *stacky = NULL;
unsigned int line_number = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
stack_second.file = file;
if (!file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (fgets(value, size, file) != NULL)
{
stack_second.value = value;
line_number++;
execute(value, &stacky, line_number, file);
}
stack_free(stacky);
fclose(file);
return (0);
}
