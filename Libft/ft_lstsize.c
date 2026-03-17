/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:09:49 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 19:15:58 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
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
//     t_list *a = ft_lstnew(ft_strdup("abc"));
//     t_list *b = ft_lstnew(ft_strdup("lololol"));
//     t_list *c = ft_lstnew(ft_strdup("CdzLkUHji"));
//     t_list *d = ft_lstnew(ft_strdup("90pk"));
//     a -> next = b;
//     b -> next = c;
//     c -> next = d;
//     d -> next = NULL;

//     printabc(a);
// 	printf("\n");
//     int j = ft_lstsize(a);
// 	printf("ft_lstsize(): %d nodes in the list\n", j);
//     return 0;
// }