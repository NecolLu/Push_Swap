/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:28:42 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 18:58:59 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
// 		printf("  ft_isalpha: %d\n", ft_isalpha(c));
// 		i++;
// 	}
// 	return 0;
// }