/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:36:57 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 18:59:33 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = ft_numlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[len - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("===== TESTING FT_ITOA =====\n");
//     printf("%s\n", ft_itoa(0));          // "0"
// 	printf("%s\n", ft_itoa(42));         // "42"
// 	printf("%s\n", ft_itoa(-42));        // "-42"
// 	printf("%s\n", ft_itoa(2147483647)); // "2147483647"
// 	printf("%s\n", ft_itoa(-2147483648)); // "-2147483648"
// 	return 0;
// }