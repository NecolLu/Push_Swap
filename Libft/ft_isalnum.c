/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:39:17 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 18:58:54 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
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
// 		printf("  ft_isalnum: %d\n", ft_isalnum(c));
// 		i++;
// 	}
// 	return 0;
// }