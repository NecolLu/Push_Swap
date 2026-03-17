/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zloo <zloo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 07:55:43 by zloo              #+#    #+#             */
/*   Updated: 2025/11/10 19:14:41 by zloo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dupli;
	int		i;

	len = ft_strlen(s);
	dupli = malloc(len + 1);
	if (dupli == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dupli[i] = s[i];
		i++;
	}
	dupli[i] = '\0';
	return (dupli);
}

// int	main(void)
// {
// 	printf("===== TESTING FT_STRDUP =====\n");
//     char *text = "Hello 42!";
//     char *copy;

//     copy = ft_strdup(text);
//     if (!copy)
//     {   
//         printf("Memory allocation failed\n");
//         return (1);
//     }   

//     printf("Original : %s\n", text);
//     printf("Duplicate: %s\n", copy);
//     free(copy);
// 	return 0;
// }