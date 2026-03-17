/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 00:55:51 by zloo              #+#    #+#             */
/*   Updated: 2026/03/11 11:17:16 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Move numbers from stack A → stack B in chunks of indexes
*/
static void	push_chunks(t_stack **a, t_stack **b, int chunk)
{
	int	i;

	i = 0;
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			if ((*b)->index < i)
				rb(b);
			i++;
		}
		else if ((*a)->index <= i + chunk)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
}

void	chunk_sort(t_stack **a, t_stack **b, int size)
{
	int	chunk;

	if (size <= 3)
	{
		sort_three(a);
		return ;
	}
	if (size <= 100)
		chunk = size / 5;
	else
		chunk = size / 20;
	push_chunks(a, b, chunk);
	push_back_optimized(a, b);
}
