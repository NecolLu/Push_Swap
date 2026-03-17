/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:01:58 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 19:01:28 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void    my_func(unsigned int i, char *c)
// {
//     if (i % 2 == 0)
//     *c = toupper(*c);
// }

// int	main(void)
// {
// 	printf("===== TESTING FT_STRITERI =====\n");
//     char str[] = "hello world";
//     ft_striteri(str, my_func);
//     printf("Result: %s\n", str);
// }