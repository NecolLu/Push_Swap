/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:42:20 by zloo              #+#    #+#             */
/*   Updated: 2025/11/13 08:59:55 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*new_s;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_s = malloc((len + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && i < len)
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

// char my_func(unsigned int i, char c)
// {
//     if (i % 2 == 0)
//         return toupper(c);
//     return c;
// }

// int	main(void)
// {
// 	printf("===== TESTING FT_STRMAPI =====\n");
//     char str[] = "hello world";
//     char *result = ft_strmapi(str, my_func);
//     printf("Result: %s\n", result);
//     free(result);
// }