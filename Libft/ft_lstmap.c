/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:43:54 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 08:39:22 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	void	*new_content;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst -> content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst -> next;
	}
	return (new_list);
}

// void	free_content(void *content)
// {
// 	free(content);
// }

// void *make_uppercase(void *content)
// {
//     char *str = (char *)content;
//     int i = 0;
//     while (str[i])
//     {
//         if (str[i] >= 'a' && str[i] <= 'z')
//             str[i] -= 32;
//         i++;
//     }
// 	return (str);
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
//     ft_lstmap(a, make_uppercase, free_content);
// 	printf("ft_lstmap(): Finished successfully\n");
//     printabc(a);
// 	printf("\n");
//     return 0;
// }
