/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:45:23 by zloo              #+#    #+#             */
/*   Updated: 2026/03/17 15:50:00 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Check if string is a valid integer format
*/
int	is_valid_number(char *str)
{
	int	i;

	i = 0;
	if (!str || !str[0])
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*
** Check if value already exists in stack
*/
int	has_duplicate(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->value == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}

/*
** Check entire stack for duplicate values
*/
void	check_duplicates(t_stack *stack)
{
	t_stack	*current;

	current = stack;
	while (current)
	{
		if (has_duplicate(current->next, current->value))
		{
			free_stack(&stack);
			error_exit();
		}			
		current = current->next;
	}
}
