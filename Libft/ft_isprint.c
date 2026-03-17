/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:39:57 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 18:59:13 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
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
// 		printf("  ft_isprint: %d\n", ft_isprint(c));
// 		i++;
// 	}
// 	return 0;
// }