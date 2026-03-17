/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:51:34 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 19:23:18 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && ptr1[i] == ptr2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (ptr1[i] - ptr2[i]);
}

// int	main(void)
// {
// 	char	*s1 = "rawr";
// 	char	*s2 = "raur";
// 	int	p = ft_memcmp(s1, s2, ft_strlen(s2));

// 	if (p == 0)
//         printf("It's same: %d\n", p);
//     else
//         printf("It's different: %d\n", p);

//     return 0;
// }