/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:18:36 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 19:18:24 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
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

// void make_uppercase(void *content)
// {
//     char *str = (char *)content;
//     int i = 0;
//     while (str[i])
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//             str[i] -= 32;
//         i++;
//     }
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
//     printf("\n");
//     ft_lstiter(a, make_uppercase);
//     printabc(a);
//     return 0;
// }