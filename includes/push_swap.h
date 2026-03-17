/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 00:29:38 by zloo              #+#    #+#             */
/*   Updated: 2026/03/11 13:38:46 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

// Stack structure - each node holds one number
typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

// Main data structure to hold both stacks
typedef struct s_data
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size;
}	t_data;

// Parser functions
t_stack	*parse_input(int argc, char **argv);
void	add_to_stack(t_stack **stack, int value);
int		parse_number(char *str);

// Validation functions
int		is_valid_number(char *str);
void	check_duplicates(t_stack *stack);
int		has_duplicate(t_stack *stack, int value);

// Utility functions
void	error_exit(void);
void	free_stack(t_stack **stack);
void	free_split(char **arr);
int		stack_size(t_stack *stack);

// Stack operations
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

// Small stack sorting
int		is_sorted(t_stack *stack);
void	sort_two(t_stack **stack_a);
void	sort_three(t_stack **stack_a);
void	sort_small(t_stack **stack_a, t_stack **stack_b, int size);

// Normalization
void	normalize_stack(t_stack *stack, int size);

// Chunk sort (put elements into their range/group according to the index)
void	chunk_sort(t_stack **stack_a, t_stack **stack_b, int size);
void	push_back_optimized(t_stack **stack_a, t_stack **stack_b);

// Libft functions
char	**ft_split(char const *s, char c);
long	ft_atol(const char *str);
int		ft_isdigit(int c);

#endif