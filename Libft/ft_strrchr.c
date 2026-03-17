/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:59:27 by zloo              #+#    #+#             */
/*   Updated: 2025/11/11 14:02:46 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	size_t	i;

	last = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			last = ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (last);
}

// int	main(void)
// {
// 	printf("===== TESTING FT_STRRCHR =====\n");
//     char str[] = "Hello World";

//     printf("%s\n", ft_strrchr(str, 'l'));   // → "ld"
//     printf("%s\n", ft_strrchr(str, 'o'));   // → "orld"
//     printf("%s\n", ft_strrchr(str, 'H'));   // → "Hello World"
//     printf("%s\n", ft_strrchr(str, 'z'));   // → (null)
//     printf("%s\n", ft_strrchr(str, '\0'));  // → "" (end of string)
// }