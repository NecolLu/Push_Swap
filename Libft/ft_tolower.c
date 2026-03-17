/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:40:34 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 19:08:33 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

// int main(void)
// {
//     char str[] = "arGfHF ARfGhHF ArFFgGH";
//     int i = 0;

//     printf("Original: %s\n", str);

//     while (str[i])
//     {
//         str[i] = ft_tolower(str[i]);
//         i++;
//     }

//     printf("Lowercase: %s\n", str);

//     return 0;
// }