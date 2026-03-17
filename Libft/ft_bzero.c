/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 07:35:21 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 18:58:45 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	printf("===== TESTING FT_BZERO =====\n");
// 	char str1[20] = "Hello World!";
//     printf("Before: %s\n", str1);
//     ft_bzero(str1 + 6, 5);
//     printf("After : %s\n\n", str1);

//     char str2[20] = "Hello World!";
//     bzero(str2 + 6, 5);
//     printf("Original memset: %s\n\n", str2);
// 	return 0;
// }