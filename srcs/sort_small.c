/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 09:05:11 by zloo              #+#    #+#             */
/*   Updated: 2026/03/11 10:10:38 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Find minimum value in stack
static	int	find_min(t_stack *stack)
{
	int	min;

	min = stack->value;
	while (stack)
	{
		if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

// Find position of value in stack (0-indexed)
static int	find_position(t_stack *stack, int value)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack->value == value)
			return (pos);
		stack = stack->next;
		pos++;
	}
	return (-1);
}

// Move minimum to top and push to b
static	void	push_min_to_b(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	min;
	int	pos;

	min = find_min(*stack_a);
	pos = find_position(*stack_a, min);
	if (pos <= size / 2)
	{
		while ((*stack_a)->value != min)
			ra(stack_a);
	}
	else
	{
		while ((*stack_a)->value != min)
			rra(stack_a);
	}
	pb(stack_a, stack_b);
}

void	sort_small(t_stack **stack_a, t_stack **stack_b, int size)
{
	while (size > 3)
	{
		push_min_to_b(stack_a, stack_b, size);
		size--;
	}
	sort_three(stack_a);
	while (*stack_b)
		pa(stack_a, stack_b);
}
