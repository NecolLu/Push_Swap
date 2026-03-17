/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:49:23 by zloo              #+#    #+#             */
/*   Updated: 2026/03/17 16:00:19 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
** if arg is a string
** eg: ./push_swap "3 8 9 6 2"
*/
static void	parse_split(t_stack **stack, char *arg)
{
	char	**numbers;
	int		i;

	numbers = ft_split(arg, ' ');
	if (!numbers)
		error_exit();
	i = 0;
	while (numbers[i])
	{
		add_to_stack(stack, parse_number(numbers[i]));
		i++;
	}
	free_split(numbers);
}

/*
** Main parser function
** Handles two cases:
** 1. Multiple arguments: ./push_swap 3 2 1
** 2. Single string: ./push_swap "3 2 1"
*/
t_stack	*parse_input(int argc, char **argv)
{
	t_stack	*stack;
	int		i;

	stack = NULL;
	if (argc == 2 && argv[1][0] == '\0')
		error_exit();
	if (argc == 2)
		parse_split(&stack, argv[1]);
	else
	{
		i = 1;
		while (i < argc)
		{
			add_to_stack(&stack, parse_number(argv[i]));
			i++;
		}
	}
	check_duplicates(stack);
	return (stack);
}

/*
** Convert string to integer with error checking
*/
int	parse_number(char *str)
{
	long	num;

	if (!is_valid_number(str))
		error_exit();
	num = ft_atol(str);
	if (num > INT_MAX || num < INT_MIN)
		error_exit();
	return ((int)num);
}

/*
** Create a new node to the END of the stack
*/
void	add_to_stack(t_stack **stack, int value)
{
	t_stack	*new_node;
	t_stack	*current;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		error_exit();
	new_node->value = value;
	new_node->index = 0;
	new_node->next = NULL;
	if (*stack == NULL)
	{
		*stack = new_node;
		return ;
	}
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
}
