/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:40:17 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 19:08:37 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

// int main(void)
// {
//     char str[] = "arGfHF ARfGhHF ArFFggh";
//     int i = 0;

//     printf("Original: %s\n", str);

//     while (str[i])
//     {
//         str[i] = ft_toupper(str[i]);
//         i++;
//     }

//     printf("Uppercase: %s\n", str);

//     return 0;
// }