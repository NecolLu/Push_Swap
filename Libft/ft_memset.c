/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 07:25:32 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 19:00:57 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	printf("===== TESTING FT_MEMSET =====\n");
// 	char str1[20] = "Hello World!";
//     printf("Before: %s\n", str1);
//     ft_memset(str1 + 6, '*', 5);
//     printf("After : %s\n\n", str1);

//     char str2[20] = "Hello World!";
//     memset(str2 + 6, '*', 5);
//     printf("Original memset: %s\n\n", str2);

// 	return 0;
// }
