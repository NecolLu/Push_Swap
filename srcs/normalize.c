/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 01:20:32 by zloo              #+#    #+#             */
/*   Updated: 2026/03/11 10:29:54 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Create array from stack (for sorting)
*/
int	*stack_to_array(t_stack *stack, int size)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * size);
	if (!arr)
		error_exit();
	i = 0;
	while (stack)
	{
		arr[i] = stack->value;
		stack = stack->next;
		i++;
	}
	return (arr);
}

/*
** Simple bubble sort (used once for normalization)
*/
void	sort_array(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*
** Find position of value in sorted array
*/
int	find_index(int *sorted_arr, int size, int value)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (sorted_arr[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

/*
** Normalize stack: replace values with sorted indices
*/
void	normalize_stack(t_stack *stack, int size)
{
	int		*sorted_arr;
	t_stack	*current;

	sorted_arr = stack_to_array(stack, size);
	sort_array(sorted_arr, size);
	current = stack;
	while (current)
	{
		current->index = find_index(sorted_arr, size, current->value);
		current = current->next;
	}
	free(sorted_arr);
}
