/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 07:54:24 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 18:57:58 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		result;

	i = 0;
	while (nptr[i] == '\n' || nptr[i] == '\t' || nptr[i] == '\r'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == ' ')
		i++;
	sign = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
// int main(int argc, char **argv)
// {
//     if (argc > 1)
//     {
//         int value = ft_atoi(argv[1]);

//         printf("String to be converted: %s\n", argv[1]);
//         printf("Converted integer: %d\n", value);
//     }
//     return 0;
// }
