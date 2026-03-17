/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:45:58 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 18:59:08 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
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
// 		printf("  ft_isdigit: %d\n", ft_isdigit(c));
// 		i++;
// 	}
// 	return 0;
// }