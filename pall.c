#include "monty.h"

/**
 * pall - print stack
 * @stack: stack
 * @line_cnt: count lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
