/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 08:45:20 by zloo              #+#    #+#             */
/*   Updated: 2026/03/17 15:57:37 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_data(t_data *data, int argc, char **argv)
{
	data->stack_a = NULL;
	data->stack_b = NULL;
	data->size = 0;
	data->stack_a = parse_input(argc, argv);
	data->size = stack_size(data->stack_a);
}

static void	handle_sorting(t_data *data)
{
	if (data->size == 2)
		sort_two(&data->stack_a);
	else if (data->size == 3)
		sort_three(&data->stack_a);
	else if (data->size <= 5)
		sort_small(&data->stack_a, &data->stack_b, data->size);
	else
	{
		normalize_stack(data->stack_a, data->size);
		chunk_sort(&data->stack_a, &data->stack_b, data->size);
	}
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc < 2)
		return (0);
	init_data(&data, argc, argv);
	if (is_sorted(data.stack_a))
	{
		free_stack(&data.stack_a);
		return (0);
	}
	handle_sorting(&data);
	free_stack(&data.stack_a);
	free_stack(&data.stack_b);
	return (0);
}
