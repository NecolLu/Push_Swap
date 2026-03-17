/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 08:37:11 by zloo              #+#    #+#             */
/*   Updated: 2026/03/05 10:14:57 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_position(t_stack *stack, int index)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack->index == index)
			return (pos);
		stack = stack->next;
		pos++;
	}
	return (-1);
}

static int	get_rotation_cost(int pos, int size)
{
	if (pos <= size / 2)
		return (pos);
	else
		return (pos - size);
}

static void	rotate_to_top(t_stack **stack, int pos, int size, char name)
{
	int	cost;

	cost = get_rotation_cost(pos, size);
	if (cost > 0)
	{
		while (cost > 0)
		{
			if (name == 'a')
				ra(stack);
			else
				rb(stack);
			cost--;
		}
	}
	else
	{
		while (cost < 0)
		{
			if (name == 'a')
				rra(stack);
			else
				rrb(stack);
			cost++;
		}
	}
}

/*
** Find max index in stack
*/
static int	find_max_index(t_stack *stack)
{
	int	max;

	if (!stack)
		return (0);
	max = stack->index;
	while (stack)
	{
		if (stack->index > max)
			max = stack->index;
		stack = stack->next;
	}
	return (max);
}

/*
** Push back from b to a
*/
void	push_back_optimized(t_stack **stack_a, t_stack **stack_b)
{
	int	max_index;
	int	max_pos;
	int	size_b;

	while (*stack_b)
	{
		max_index = find_max_index(*stack_b);
		max_pos = find_position(*stack_b, max_index);
		size_b = stack_size(*stack_b);
		rotate_to_top(stack_b, max_pos, size_b, 'b');
		pa(stack_a, stack_b);
	}
}
