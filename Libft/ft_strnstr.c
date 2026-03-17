/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:07:07 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 19:01:59 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char	*little, size_t	len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("===== TESTING FT_STRNSTR =====\n");
//     char str[] = "Hello world";
//     char find[] = "or";

//     printf("%s\n", ft_strnstr(str, find, 5));   // (NULL)
//     printf("%s\n", ft_strnstr(str, find, 11));  // "world"
// 	return 0;
// }