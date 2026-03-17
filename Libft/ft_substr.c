/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:21:12 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 09:07:51 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*empty_sub(void)
{
	char	*sub;

	sub = malloc(1);
	if (!sub)
		return (NULL);
	sub[0] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (empty_sub());
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("===== TESTING FT_SUBSTR =====\n");
//     char    str[] = "Helou, Worldd";
//     char    *sub = ft_substr(str, 1, 12);
//     printf("Before: %s\n", str);
//     printf("Result: %s\n", sub);
//     free(sub);
// 	return 0;
// }