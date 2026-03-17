/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:14:53 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 19:01:19 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)s;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (unsigned char)c)
			return (&ptr[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (&ptr[i]);
	return (NULL);
}

// int	main(void)
// {
// 	printf("===== TESTING FT_STRCHR =====\n");
//     char str[] = "Hello World";
//     printf("%s\n", ft_strchr(str, 'o'));   // → "o World"
//     printf("%s\n", ft_strchr(str, 'W'));   // → "World"
//     printf("%s\n", ft_strchr(str, 'z'));   // → (null)
//     printf("%s\n", ft_strchr(str, '\0'));  // → "" (points to end)
// }