/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:19:43 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 10:49:50 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

// #include <stdio.h>
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
//     b -> next = c;
// 	c -> next = NULL;

// 	printabc(a);
//     printf("\n");
//     t_list *v = ft_lstlast(a);
// 	printf("ft_lstlast(): Finished successfully\n");
//     printabc(v);
// 	printf("\n");
//     return 0;
// }