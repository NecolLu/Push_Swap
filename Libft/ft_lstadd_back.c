/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:22:41 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 13:58:49 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)-> next = new;
}

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
// 	t_list *a = ft_lstnew(ft_strdup("abc"));
//     t_list *b = ft_lstnew(ft_strdup("lololol"));
// 	t_list *c = ft_lstnew(ft_strdup("CdzLkUHji"));
//     a -> next = b;
//     b -> next = NULL;

// 	printabc(a);
//     printf("\n");
//     ft_lstadd_back(&a, c);
// 	printf("ft_lstadd_back(): Finished successfully\n");
//     printabc(a);
// 	printf("\n");
//     return 0;
// }