/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:02:19 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 08:04:31 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}

// static printabc(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s -> ",(char *)lst -> content);
// 		lst = lst -> next;
// 	}
// 	printf ("NULL");
// }
// int	main (void)
// {
//     t_list *a = ft_lstnew("A");
//     t_list *b = ft_lstnew("B");
//     t_list *c = ft_lstnew("C");
//     a -> next = b;
//     b -> next = c;
//     c -> next = NULL;

// 	printabc(a);
// }
