/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:24:37 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 12:01:28 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		del((*lst)-> content);
		free(*lst);
		*lst = temp;
	}
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
//     ft_lstclear(&a, del);
//     printabc(a);
// 	printf("\n");
//     return 0;
// }