/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 08:04:55 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 11:38:56 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (unsigned char *)dest;
	ptr2 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char src[] = "HKvhLYIhkjn";
// 	char dest[10];

// 	ft_memcpy(dest, src, 6);
// 	printf("Copied: %s\n", dest);

// 	return 0;
// }
