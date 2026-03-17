/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 08:59:03 by zloo              #+#    #+#             */
/*   Updated: 2026/03/13 08:10:37 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

/*
** sa (swap a): Swap the first 2 elements at the top of stack a.
** Do nothing if there is only one or no elements.
*/
void	sa(t_stack **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

/*
** sb (swap b): Swap the first 2 elements at the top of stack b.
*/
void	sb(t_stack **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

/*
** ss: sa and sb at the same time.
** (Don't print sa and sb separately, just print ss once)
*/
void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
