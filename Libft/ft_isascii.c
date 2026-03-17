/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:39:40 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 18:59:03 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char test_chars[] = {'A', 'z', '5', '@', ' ', '0', '\n'};
//     int i = 0;

//     while (i < 7)
//     {
//         char c = test_chars[i];
//         printf("Testing '%c' (ASCII %d):\n", c, c);
// 		printf("  ft_isascii: %d\n", ft_isascii(c));
// 		i++;
// 	}
// 	return 0;
// }