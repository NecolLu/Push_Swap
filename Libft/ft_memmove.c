/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 08:44:08 by zloo              #+#    #+#             */
/*   Updated: 2025/11/13 08:51:28 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
		while (n--)
			d[n] = s[n];
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// int main(void)
// {
//     char str1[] = "Hello World!";

//     // Overlapping copy (right to left)
//     ft_memmove(str1 + 6, str1, 5);
//     printf("ft_memmove result: %s\n", str1);

//     // Normal copy (left to right)
//     ft_memmove(str1, str1 + 6, 5);
//     printf("memmove result:    %s\n", str2);

//     return 0;
// }
