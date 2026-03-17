/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:40:42 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 19:18:34 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}

// void	del(void *content)
// {
// 	free(content);
// }

// static	void printabc(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s -> ",(char *)lst -> content);
// 		lst = lst -> next;
// 	}
// 	printf ("NULL");
// }

// int	main(void)
// {
//     t_list *a = ft_lstnew(ft_strdup("A"));
//     t_list *b = ft_lstnew(ft_strdup("B"));
//     t_list *c = ft_lstnew(ft_strdup("C"));
//     t_list *d = ft_lstnew(ft_strdup("D"));
//     a -> next = b;
//     b -> next = c;
//     c -> next = d;
//     d -> next = NULL;

//     printabc(a);
//     printf("\n");
//     ft_lstdelone(c, del);
//     b -> next = d;
//     printabc(a);
//     return 0;
// }